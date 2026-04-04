#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val, height;
    struct Node *left, *right;
} Node;

int max(int a, int b) {
    return a > b ? a : b;
}

int _height(Node *root) {
    return root ? root->height : 0;
}

int bf(Node *root) {
    return root ? _height(root->left) - _height(root->right) : 0;
}

Node *RR(Node *root) {
    Node *nr = root->left;
    Node *temp = nr->right;

    nr->right = root;
    root->left = temp;

    root->height = max(_height(root->left), _height(root->right)) + 1;
    nr->height = max(_height(nr->left), _height(nr->right)) + 1;

    return nr;
}

Node *LR(Node *root) {
    Node *nr = root->right;
    Node *temp = nr->left;

    nr->left = root;
    root->right = temp;

    root->height = max(_height(root->left), _height(root->right)) + 1;
    nr->height = max(_height(nr->left), _height(nr->right)) + 1;

    return nr;
}

Node *create(int val) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->val = val;
    temp->height = 1;
    temp->left = temp->right = NULL;
    return temp;
}

Node *insert(Node *root, int val) {
    if(!root) return create(val);
    if(val < root->val) root->left = insert(root->left, val);
    else if (val > root->val) root ->right = insert(root->right ,val);
    else return root;
    root->height = max(_height(root->left), _height(root->right)) + 1;
    int bal = bf(root);
    if(bal > 1) {
        if(bf(root->left) >= 0) {
            return RR(root);
        } else {
            root->left = LR(root->left);
            return RR(root);
        }
    }
    if(bal < -1) {
        if(bf(root->right) <= 0) {
            return LR(root);
        } else {
            root->right = RR(root->right);
            return LR(root);
        }
    }
    return root;
}

Node *suc(Node *root) {
    while(root->left) {
        root = root->left;
    }
    return root;
}

Node *rem(Node *root, int val) {
    if(!root) return root;
    if(val < root->val) root->left = rem(root->left, val);
    else if (val > root->val) root->right = rem(root->right, val);
    else {
        if(!root->left || !root->right) {
            Node *temp = root->left ? root->left : root->right;
            free(root);
            return temp;
        } else {
            Node *temp = suc(root->right);
            root->val = temp->val;
            root->right = rem(root->right, temp->val);
        }
    }
    root->height = max(_height(root->left), _height(root->right)) + 1;
    int bal = bf(root);
    if (bal > 1) {
        if(bf(root->left) > 0) {
            return RR(root);
        } else {
            root->left = LR(root->left);
            return RR(root);
        }
    }
    if(bal < -1) {
        if(bf(root->right) < 0) {
            return LR(root);
        } else {
            root->right = RR(root->right);
            return LR(root);
        }
    }
    return root;
} 

void display(Node *root, int spasi) {
    if(!root) return;
    spasi += 5;
    display(root->right, spasi);
    for(int i = 0; i < spasi; i++) printf(" ");
    printf("%d\n", root->val);
    display(root->left, spasi);
}

int main () {
    Node *root = NULL;
    int data[] = {6, 1, 2, 9, 7, 3, 5, 10};
    int size = sizeof(data)/ sizeof(data[0]);
    for(int i = 0; i < size; i++) {
        root = insert(root, data[i]);
        display(root, 0);
        printf("\n==================================\n");
    }
    return 0;
}