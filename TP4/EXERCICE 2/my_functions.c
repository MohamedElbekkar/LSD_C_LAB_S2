#include "header.h"

tree makeTree(int x, tree A1, tree A2) {
    tree A = (tree)malloc(sizeof(b_tree));
    A->data = x;
    A->left = A1;
    A->right = A2;
    return A; 
}

//Question 2
void insert(tree * A, int x) {
    tree B = makeTree(x, NULL, NULL);
    tree temp = *A;
    tree temp2 = NULL;
    while(temp != NULL) {
        temp2 = temp;
        if(x < temp->data) {
            temp = temp->left;
        } else if(x > temp->data){
            temp = temp->right;
        } else {
            return ;
        }
    }
    if(temp2 == NULL) {
        temp2 = B;
    }
    else if(x < temp2->data) {
        temp2->left = B;
    }
    else {
        temp2->right = B;
    }
}

//Question 3
int search(int x, tree A) {
    tree temp = A;
    while(temp != NULL) {
        if(temp->data == x)
            return 1;
        if (x > temp->data)
            temp = temp->right;
        if(x < temp->data)
            temp = temp->left;
    }
    return 0;
}

//Question 4
int max(int x, int y) {
    if(x > y)
        return x;
    else 
        return y;
}

int max_depth(tree A) {
	if(A==NULL) 
        return 0;
    
    return 1 + max(max_depth(A->left), max_depth(A->right));
}

//Question 5
int tree_size(tree A) {
    if(A == NULL)
        return 0;
    return 1 + tree_size(A->left) + tree_size(A->right);
}

//Print_Tree
void print2DUtil(tree root, int space)
{
    // Base case
    if (root == NULL)
        return;
  
    // Increase distance between levels
    space += COUNT;
  
    // Process right child first
    print2DUtil(root->right, space);
  
    // Print current node after space
    // count
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);
  
    // Process left child
    print2DUtil(root->left, space);
}

void print2D(tree root)
{
   // Pass initial space count as 0
   print2DUtil(root, 0);
}
