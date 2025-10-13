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

int sumOfOddNodes(BTNode *node){
    if (node == NULL) return 0;

    int current_sum = 0;

    if (node->item % 2 != 0) 
        current_sum = node->item;

    int left_sum = sumOfOddNodes(node->left);
    int right_sum = sumOfOddNodes(node->right);

    return current_sum + left_sum + right_sum;
}
