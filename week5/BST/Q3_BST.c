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

void preOrderRecursive(BSTNode *root){
	if (root == NULL) return;

	printf("%d ", root->item);
	preOrderRecursive(root->left);
	preOrderRecursive(root->right);
}

void preOrderIterative(BSTNode *root){
	if (root == NULL) {
		printf("트리가 비어있습니다.\n");
		return;
	}

	Stack s = {NULL};
	insert(&s, root);

	while( s.top != NULL){
		StackNode *sNode = pop(&s);
		BSTNode *curr = sNode->data;
		printf("%d ", curr->item);
		free(sNode);

		if (curr->right != NULL){
			insert(&s, curr->right);
		}

		if (curr->left != NULL){
			insert(&s, curr->left);
		}
	}
	printf("\n");
}
