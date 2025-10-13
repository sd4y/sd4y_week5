#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MIN_INT -1000

typedef struct _listnode{
	int item;
	struct _listnode *next;
} ListNode;	

typedef struct _linkedlist{
	int size;
	ListNode *head;
    ListNode *tail;
} LinkedList;	

typedef struct _stack{
	LinkedList ll;
}Stack;  

int balanced(char *expression);
void removeUntil(Stack *s, int value);
void createStackFromLinkedList(LinkedList *ll , Stack *stack);
void removeEvenValues(Stack *s);

void push(Stack *s , int item);
int pop(Stack *s);
int peek(Stack *s);
int isEmptyStack(Stack *s);
void removeAllItemsFromStack(Stack *s);

void printList(LinkedList *ll);
ListNode * findNode(LinkedList *ll, int index);
int insertNode(LinkedList *ll, int index, int value);
int removeNode(LinkedList *ll, int index);
void removeAllItems(LinkedList *ll);

int main(){
	
	return 0;
}

int balanced(char *expression){
/* add your code here */

}

void removeUntil(Stack *s, int value){
/* add your code here */

}

void createStackFromLinkedList(LinkedList *ll, Stack *s){
    /* add your code here */

}

void removeEvenValues(Stack *s){
	/* add your code here */

}

void push(Stack *s, int item){
	
}

int pop(Stack *s){

	return;
}

int peek(Stack *s){

   return;
}

int isEmptyStack(Stack *s){

	return;
}

void removeAllItemsFromStack(Stack *s){

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
