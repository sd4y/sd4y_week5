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
	if(ll == NULL || ll->head == NULL || ll->size <= 0){
		resultBackList->size = 0;
		resultBackList->head = NULL;
		resultFrontList->size = 0;
		resultFrontList->head = NULL;
		return;
	}

	int fornt_size = (ll->size + 1) / 2;
	int back_size = ll->size - fornt_size;

	ListNode* CurrentNode = ll->head;
	resultFrontList->head =  ll->head;

	for (int i = 0; i < fornt_size - 1; ++i){
		CurrentNode = CurrentNode->next;
	}
	
	resultBackList->head = CurrentNode->next;

	CurrentNode->next = NULL;

	resultFrontList->size = fornt_size;
	resultBackList->size = back_size;

	ll->head = NULL;
	ll->size = 0;
}