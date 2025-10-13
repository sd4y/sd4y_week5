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

int GetMaxHeight(BTNode *node){
	if (node == NULL) return 0;

	int leftHeight = GetMaxHeight(node->left);
	int rightHeight = GetMaxHeight(node->right);

	return 1 +(leftHeight > rightHeight ? leftHeight : rightHeight);
}

int hasGreatGrandchild(BTNode *node){
	if (node == NULL) return 0;

	return GetMaxHeight(node) >= 4 ? 1 : 0;
}
