#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *left, *right;
} Node;

Node *create(int val) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->val = val;
    temp->left = temp->right= NULL;
    return temp;
}

Node *insert(Node *root, int val) {
    if(!root) return create(val);
    if(val < root->val) {
        root->left = insert(root->left, val);
    } else if (val > root->val) {
        root->right = insert(root->right, val);
    } else {
        return root;
    }
    return root;
}

Node *successor(Node *root) {
    while(root->left) {
        root = root->left;
    }
    return root;
}

Node *predecessor(Node *root) {
    while(root->right) {
        root = root->right;
    }
    return root;
}

Node *rem(Node *root, int val) {
    if(!root) return root;
    if(val < root->val) {
        root->left = rem(root->left, val);
    } else if (val > root->right) {
        root->right = rem(root->right, val);
    } else {
        if(!root->left, !root->right) {
            free(root);
            return NULL;
        } else if (!root->left || !root->right) {
            Node *temp = root->left ? root->left : root->right;
            free(root);
            return temp;
        } else {
            Node *temp = predecessor(root->left);
            root->val = temp->val;
            root->left = rem(root->left, temp->val);
        
            //successor
            // Node *temp = successor(root->right);
            // root->val = temp->val;
            // root->right = rem(root->right
            // , temp->val);
        }
        return root;
    }
    return root;
}

void preorder(Node *root) {
    if(root) {
        printf("%d ", root->val);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node *root) {
    if(root) {
        inorder(root->left);
        printf("%d ", root->val);
        inorder(root->right);
    }
}


void postorder(Node *root) {
    if(root) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->val);
    }
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


    return 0;
}