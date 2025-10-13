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

int maxHeight(BTNode *node){
    if (node == NULL) return 0;
    
    int leftHeight = maxHeight(node->left);
    int rightHeight = maxHeight(node->right);
    
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

