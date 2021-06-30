#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdio.h>


typedef struct b_tree {
	int data;
	struct b_tree * left;
	struct b_tree * right;
} b_tree;

typedef struct b_tree * tree;

tree makeTree(int, tree, tree);
int max(int , int );
int tree_depth(tree );
int tree_diameter(tree );
int leaf(tree);
int leaf_sum(tree);


