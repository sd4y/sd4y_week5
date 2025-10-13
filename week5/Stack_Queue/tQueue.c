#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct _listnode{
	int item;
	struct _listnode *next;
} ListNode;	

typedef struct _linkedlist{
	int size;
	ListNode *head;
	ListNode *tail;
} LinkedList;	

typedef struct _queue{
	LinkedList ll;
} Queue;  

void recursiveReverse(Queue *q);
void reverse(Queue *q);
void createQueueFromLinkedList(LinkedList *ll, Queue *q);
void removeOddValues(Queue *q);

void enqueue(Queue *q, int item);
int dequeue(Queue *q);
int isEmptyQueue(Queue *q);
void removeAllItemsFromQueue(Queue *q);

void printList(LinkedList *ll);
ListNode * findNode(LinkedList *ll, int index);
int insertNode(LinkedList *ll, int index, int value);
int removeNode(LinkedList *ll, int index);
void removeAllItems(LinkedList *ll);

int main(){
	
	return 0;
}

void recursiveReverse(Queue *q){
/* add your code here */

}

void reverse(Queue *q){
/* add your code here */

}

void createQueueFromLinkedList(LinkedList *ll, Queue *q){
	/* add your code here */

}

void removeOddValues(Queue *q){
	/* add your code here */

}

void enqueue(Queue *q, int item) {

}

int dequeue(Queue *q) {

	return;
}

int isEmptyQueue(Queue *q) {

	return ;
}

void removeAllItemsFromQueue(Queue *q){
	
}

void printList(LinkedList *ll){

}

void removeAllItems(LinkedList *ll){
	
}

ListNode * findNode(LinkedList *ll, int index){

	return;
}

int insertNode(LinkedList *ll, int index, int value){

	return;
}

int removeNode(LinkedList *ll, int index){

	return;
}
