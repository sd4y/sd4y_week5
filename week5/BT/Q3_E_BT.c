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

//자식 노드가 1개인 노드의 개수를 반환
int countOneChildNodes(BTNode *node){ 
    if (node == NULL) return 0;

    int hasLeft =  0, hasRight = 0;
    if (node->left != NULL) hasLeft = 1;
    if (node->right != NULL) hasRight = 1;

    return (hasLeft + hasRight == 1 ? 1 : 0) + 
                 countOneChildNodes(node->left) + 
                 countOneChildNodes(node->right);
}