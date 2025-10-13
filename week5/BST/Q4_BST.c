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

void postOrderIterativeS1(BSTNode *root){
	if (root == NULL) {
		printf("트리가 비어있습니다.\n");
		return;
	}
	
	Stack s = {NULL};
	BSTNode* curr = root;
	BSTNode *last = NULL;

	while (curr != NULL || s.top != NULL){
		while(curr != NULL){
			insert(&s, curr);
			curr = curr->left;
		}
		curr = s.top->data;
		if (curr->right == NULL || curr->right == last){
			printf("%d ", curr->item);
			StackNode *sNode = pop(&s);
			free(sNode);
			last = curr;
			curr = NULL;
		}else{
			curr = curr->right;
		}
	}
	printf("\n");
}
