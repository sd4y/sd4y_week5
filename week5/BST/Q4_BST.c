#include <stdio.h>
#include <stdlib.h>

typedef struct _bstnode{
	int item;
	struct _bstnode *left;
	struct _bstnode *right;
} BSTNode;  

typedef struct _stackNode{
	BSTNode *data;
	struct _stackNode *next;
}StackNode; 

typedef struct _stack{
	StackNode *top;
}Stack; 

void postOrderIterativeS1(BSTNode *root){
	if (root == NULL) {
		printf("트리가 비어있습니다.\n");
		return;
	}
 

}
