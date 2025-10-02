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

void frontBackSplitLinkedList(LinkedList *ll, LinkedList *resultFrontList, LinkedList *resultBackList)
{
	/* add your code here */
}