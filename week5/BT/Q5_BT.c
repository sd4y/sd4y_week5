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

void mirrorTree(BTNode *node){
	if (node == NULL) return;

	BTNode* temp = node->left;
	node->left = node->right;
	node->right = temp;

	mirrorTree(node->left);
	mirrorTree(node->right);
}
