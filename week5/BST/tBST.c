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

typedef struct _queue{
	QueueNode *head;
	QueueNode *tail;
}Queue; 

typedef struct _stackNode{
	BSTNode *data;
	struct _stackNode *next;
}StackNode; 

typedef struct _stack{
	StackNode *top;
}Stack;

void postOrderIterativeS2(BSTNode *root);
void postOrderIterativeS1(BSTNode *node);
void preOrderIterative(BSTNode *root);
void inOrderTraversal(BSTNode *node);
void levelOrderTraversal(BSTNode *node);

void insertBSTNode(BSTNode **node, int value);

BSTNode* dequeue(QueueNode **head, QueueNode **tail);
void enqueue(QueueNode **head, QueueNode **tail, BSTNode *node);
int isEmptyQ(QueueNode *head);
void removeAll(BSTNode **node);
void push(Stack *stack, BSTNode * node);
BSTNode * pop(Stack * s);
BSTNode * peek(Stack * s);
int isEmptyS(Stack *s);

int main(){

	return 0;
}

void postOrderIterativeS2(BSTNode *root){
    /* add your code here */
}

void postOrderIterativeS1(BSTNode *root){
    /* add your code here */
}

void preOrderIterative(BSTNode *root){
    /* add your code here */
}   

void inOrderTraversal(BSTNode *root){
    /* add your code here */
}

void levelOrderTraversal(BSTNode* root){
    /* add your code here */
}

void insertBSTNode(BSTNode **node, int value){
    	
}

void enqueue(QueueNode **headPtr, QueueNode **tailPtr, BSTNode *node){
   
}

BSTNode* dequeue(QueueNode **headPtr, QueueNode **tailPtr){
	
    return;
}

int isEmptyQ(QueueNode *head){

	return;
}

void removeAll(BSTNode **node){

}

void push(Stack *stack, BSTNode * node){

}

BSTNode * pop(Stack * s){

	return;
}

BSTNode * peek(Stack * s){

	return;
}

int isEmptyS(Stack *s){

	return;
}