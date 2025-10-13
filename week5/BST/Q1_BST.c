#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
 
typedef struct _bstnode{
	int item;
	struct _bstnode *left;
	struct _bstnode *right;
} BSTNode; 

typedef struct _QueueNode {
	BSTNode *data;
	struct _QueueNode *nextPtr;
}QueueNode;

typedef struct _queue
{
	QueueNode *head;
	QueueNode *tail;
}Queue;

void insertQ (Queue* q, BSTNode* Node){
	QueueNode* qNode = (QueueNode*)malloc(sizeof(QueueNode));
	qNode->data = Node;
	qNode->nextPtr = NULL;

	if (q->head == NULL){
		q->head = qNode;
		q->tail = qNode;
	}else{
		q->tail->nextPtr = qNode;
		q->tail = qNode;
	}
}

QueueNode* pop(Queue* q){
	if (q->head == NULL) return NULL;

	QueueNode* temp = q->head;

	if (temp->nextPtr == NULL) q->tail = NULL;

	q->head = temp->nextPtr;
	return temp;
}

int isEmptyQ(Queue* q){
	return (q->head == NULL);
}

void levelOrderTraversal(BSTNode* root){
	if (root == NULL){
		printf("트리가 비어있습니다.\n");
		return;
	}

	Queue Q = {NULL, NULL};

	insertQ(&Q, root);

	while(!isEmptyQ(&Q)){
		QueueNode* qNode = pop(&Q);
		BSTNode* curr = qNode->data;

		printf("%d " , curr->item);

		if (curr->left != NULL){
			insertQ(&Q, curr->left);
		}

		if (curr->right != NULL){
			insertQ(&Q, curr->right);
		}
		free(qNode);
	}
	printf("\n");
}

