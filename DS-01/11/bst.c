#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *left, *right;
} Node;

Node *create(int val) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->val = val;
    temp->right = temp->left = NULL;
    return temp;
}

Node *insert(Node *root, int val) {
    if(!root) {
        return create(val);
    }
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

Node *delNode(Node *root, int val) {
    if(!root) {
        return root;
    }
    if(val < root->val) {
        root->left = delNode(root->left, val);
    } else if (val > root->val) {
        root->right = delNode(root->right, val);
    } else {
        if(!root->left && !root->right) {
            free(root);
            return NULL;
        } else if (!root->left || !root->right) {
            Node *temp = root->left ? root->left : root->right;
            free(root);
            return temp;
        } else {
            Node *succ = successor(root->right);
            root->val = succ->val;
            root->right = delNode(root->right, succ->val);
        }
    }
    return root;
}

Node *search(Node *root, int target) {
    if(!root) return NULL;
    if(root->val = target) return root;
    if(target < root->val) {
        return search(root->left, target);
    } else{
        return search(root->right, target);
    }
}

//TRAVERSAL
//Copy Data
void preorder(Node *root) {
    if(root) {
        printf("%d ", root->val);
        preorder(root->left);
        preorder(root->right);
    }
}

//Tampilin sesuai urutan / terurut
void inorder(Node *root) {
    if(root) {
        inorder(root->left);
        printf("%d ", root->val);
        inorder(root->right);
    }
} 

//Delete Data
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
    for(int i = 0; i < spasi; i++) {
        printf(" ");
    }
    printf("%d\n", root->val);
    display(root->left , spasi);
}

int main () {
    Node *root = NULL;
    int data[] = {7, 3, 1, 10, 6, 4, 11, 5};
    for(int i = 0; i < 8; i++) {
        root = insert(root, data[i]);
    }
    display(root, 0);
    printf("Preorder: "); preorder(root);
    printf("\nInorder: "); inorder(root);
    printf("\nPostotder: "); postorder(root);
    printf("\n");
    delNode(root, 3);
    display(root, 0);
    return 0;
}