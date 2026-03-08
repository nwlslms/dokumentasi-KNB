#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *left, *right;
} Node;

Node *create(int val) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->val = val;
    temp->left = temp->right = NULL;
    return temp;
}

void preorder(Node *root) {
    if(root) {
        printf("%d ",root->val);
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

Node *deleteAll(Node *root) {
    if(root) {
        deleteAll(root->left);
        deleteAll(root->right);
        free(root);
        return NULL;
    }
}

int main () {
    Node *root = NULL;
    root = create(67);
    printf("%d\n", root->val);
    root->right = create(20);
    root->left = create(1);
    root->left->left = create(14);
    root->left->right = create(17);
    root->right->left = create(4);
    root->right->right = create(60);
    printf("Preorder: ");
    preorder(root);
    printf("\nInorder: ");
    inorder(root);
    printf("\npostorder: ");
    postorder(root);
    root = deleteAll(root);
    if(root == NULL) {
        printf("KOSONG\n");
    } else {
        printf("PRIKITIW\n");
    }
    return 0;
}