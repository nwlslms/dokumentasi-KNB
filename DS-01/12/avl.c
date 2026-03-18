#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    int height;
    struct Node *left, *right;
} Node;

Node *create(int val) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->val = val;
    temp->height = 1;
    temp->left = temp->right = NULL;
    return temp;
}   

int max (int a, int b) {
    return a > b ? a : b;
}

int gh(Node *root) {
    if(root) {
        return root->height;
    } else {
        return 0;
    }
}

int BF(Node *root) {
    if(root) {
        return gh(root->left) - gh(root->right);
    } else {
        return 0;
    }
}

Node *RotateRight(Node *root) {
    Node *newRoot = root->left;
    Node *temp = newRoot->right;

    newRoot->right = root;
    root->left = temp;

    root->height = max(gh(root->left), gh(root->right)) + 1;
    newRoot->height = max(gh(newRoot->left), gh(newRoot->right)) + 1;

    return newRoot;
}

Node *LeftRotate(Node *root) {
    Node *newRoot = root->right;
    Node *temp = newRoot->left;

    newRoot->left = root;
    root->right = temp;

    root->height = max(gh(root->left), gh(root->right)) + 1;
    newRoot->height = max(gh(newRoot->left), gh(newRoot->right)) + 1;

    return newRoot;
}

Node *insert(Node *root, int val) {
    if(!root) return create(val);
    if(val < root->val) root->left = insert(root->left, val);
    else if (val > root->val) root->right = insert(root->right, val);
    else return root;

    root->height = max(gh(root->right), gh(root->left)) + 1;
    int bal = BF(root);

    if(bal > 1) {
        if(val < root->left->val) {
            return RotateRight(root);
        } else{
            root->left = LeftRotate(root->left);
            return RotateRight(root);
        }
    }
    if(bal < -1) {
        if(val > root->right->val) {
            return LeftRotate(root);
        } else {
            root->right = RotateRight(root->right);
            return LeftRotate(root);
        }
    }
    return root;
}

Node *pre(Node *root) {
    while(root->right) {
        root = root->right;
    }
    return root;
}

Node *rem(Node *root, int val) {
    if(!root) return root;
    if(val < root->val) root->left = rem(root->left, val);
    else if (val > root->val) root->right = rem(root->right, val);
    else {
        if(!root->left && !root->right) {
            free(root);
            return NULL;
        } else if (!root->left || !root->right) {
            Node *temp = root->left ? root->left : root->right;
            free(root);
            return temp;
        } else {
            Node *temp = pre(root->left);
            root->val = temp->val;
            root->left = rem(root->left, temp->val);
        }
    }
    root->height = max(gh(root->right), gh(root->left)) + 1;
    int bal = BF(root);
    if(bal > 1) {
        if(BF(root->left) >= 0) {
            return RotateRight(root);
        } else {
            root->left = LeftRotate(root->left);
            return RotateRight(root);
        }
    }

    if(bal < -1) {
        if(BF(root->right) <= 0) {
            return LeftRotate(root);
        } else {
            root->right = RotateRight(root->right);
            return LeftRotate(root);
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
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int size = sizeof(data) / sizeof(data[0]);
    for(int i = 0; i < size; i++) {
        root = insert(root, data[i]);
        display(root, 0);
    }
    printf("===============================\n");
    for(int i = size - 1; i >= 0; i--) {
        root = rem(root, data[i]);
        display(root, 0);
    }
    return 0;
}