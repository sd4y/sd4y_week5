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

int smallestValue(BTNode *node){
	if (node == NULL) return 2147483647; // MSB 를 제외한 모든 비트가 1인 값

	int leftValue = smallestValue(node->left);
	int rightValue = smallestValue(node->right);

	int minValue = node->item < leftValue ? node->item : leftValue;
	minValue = minValue < rightValue ? minValue : rightValue;

	return minValue;
}
