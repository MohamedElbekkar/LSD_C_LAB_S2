#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};
typedef struct node node;
typedef struct node * list;



list create_node(int data);
void add_node(int data, list L);
list array_to_list(int size, int arr[]);
void print_list(list L);
void remove_node(list *L, int index);

#endif