#include <stdio.h>
#include <stdlib.h>

typedef struct _btnode{
	int item;
	struct _btnode *left;
	struct _btnode *right;
} BTNode; 

typedef struct _stackNode{
    BTNode *btnode;
    struct _stackNode *next;
}StackNode;

typedef struct _stack{
    StackNode *top;
}Stack;

void printSmallerValues(BTNode *node, int m){
	if (node == NULL) return;

	if (node->item < m) 
		printf("%d\n", node->item); 

	printSmallerValues(node->left, m);
	printSmallerValues(node->right, m);
}
