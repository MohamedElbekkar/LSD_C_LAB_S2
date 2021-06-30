#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdio.h>
#define COUNT 10

typedef struct b_tree {
	int data;
	struct b_tree * left;
	struct b_tree * right;
} b_tree;
typedef struct b_tree * tree;


tree makeTree(int, tree, tree );
int max(int, int);
int max_depth(tree);
void left_rotation(tree *);
void right_rotation(tree *);
void AVL(tree *);
void print2DUtil(tree, int);
void print2D(tree);


