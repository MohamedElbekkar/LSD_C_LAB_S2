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


tree makeTree(int , tree , tree );
void insert(tree * , int );
int search(int , tree );
int max(int , int );
int max_depth(tree);
int tree_size(tree);
void print2DUtil(tree, int);
void print2D(tree);


