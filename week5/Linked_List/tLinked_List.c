#include <stdio.h>
#include <stdlib.h>

typedef struct _listnode{
	int item;
	struct _listnode *next;
} ListNode;	

typedef struct _linkedlist{
	int size;
	ListNode *head;
} LinkedList;

void alternateMergeLinkedList(LinkedList *ll1, LinkedList *ll2);
int insertSortedLL(LinkedList *ll, int item);
void printList(LinkedList *ll);
void removeAllItems(LinkedList *ll);
ListNode *findNode(LinkedList *ll, int index);
int insertNode(LinkedList *ll, int index, int value);
int removeNode(LinkedList *ll, int index);


int main()
{
    
	return 0;
}

void RecursiveReverse(ListNode **ptrHead){

}

int moveMaxToFront(ListNode **ptrHead){

}

void frontBackSplitLinkedList(LinkedList *ll, LinkedList *resultFrontList, LinkedList *resultBackList){

}

void moveEvenItemsToBack(LinkedList *ll){

}

void moveOddItemsToBack(LinkedList *ll){

}

void alternateMergeLinkedList(LinkedList *ll1, LinkedList *ll2){
    
}

int insertSortedLL(LinkedList *ll, int item){

}

void printList(LinkedList *ll){

}


void removeAllItems(LinkedList *ll){

}


ListNode *findNode(LinkedList *ll, int index){
    return;
}

int insertNode(LinkedList *ll, int index, int value){
	return -1;
}


int removeNode(LinkedList *ll, int index){
	return -1;
}