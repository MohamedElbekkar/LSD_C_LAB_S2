#include "header.h"

tree makeTree(int x, tree A1, tree A2) {
    tree A = (tree)malloc(sizeof(b_tree));
    A->data = x;
    A->left = A1;
    A->right = A2;
    return A; 
}

int max(int x, int y) {
    if(x > y)
        return x;
    else 
        return y;
}

int tree_depth(tree A) {
	if(A==NULL) 
        return 0;
    
    return 1 + max(tree_depth(A->left), tree_depth(A->right));
}


int tree_diameter(tree A) {
    if(A == NULL)
        return 0;
    int left_depth = tree_depth(A->left);
    int right_depth = tree_depth(A->right);
    int left_diameter = tree_diameter(A->left);
    int right_diameter = tree_diameter(A->right);
    return max(left_depth + right_depth + 1, max(left_diameter, right_diameter));
}

int leaf(tree A) {
    if(A->left == NULL && A->right == NULL)
        return 1;
    return 0;
}

int leaf_sum(tree A) {
    int sum = 0;
    if(A==NULL) {
        return 0;
    }
    if(A->left == NULL && A->right == NULL)
        sum += A->data;
    return leaf_sum(A->left) + leaf_sum(A->right);
}

