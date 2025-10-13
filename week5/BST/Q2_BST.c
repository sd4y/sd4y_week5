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

void insert(Stack *s, BSTNode *node){
	if (node == NULL) return;
	StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
	newNode->data = node;
	newNode->next = s->top;
	s->top = newNode;
}

StackNode* pop(Stack *s){
	if (s == NULL || s->top == NULL) return NULL;
	StackNode* temp = s->top;
	s->top = s->top->next;
	return temp;
}

void inOrderRecursive(BSTNode *root){
	if (root == NULL) return;

	inOrderRecursive(root->left);
	printf("%d ",root->item);
	inOrderRecursive(root->right);
}

void inOrderTraversal(BSTNode *root){
	if (root == NULL) {
		printf("트리가 비어있습니다.\n");
		return;
	}

	Stack S = {NULL};
	BSTNode* curr = root;

	while (curr != NULL || S.top != NULL){
		while(curr != NULL){
			insert(&S, curr);
			curr = curr->left;
		}

		StackNode *sNode = pop(&S);
		curr = sNode->data;
		printf("%d ", curr->item);
		free(sNode);

		curr = curr->right;
	}
	printf("\n");
}
