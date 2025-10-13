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

int moveMaxToFront(ListNode **ptrHead)
{
    /* add your code here */

	if(*ptrHead == NULL)
		return 0;

	ListNode* maxNode = *ptrHead;
	ListNode* Current = *ptrHead;
	ListNode* Prev = NULL;
	
	while(Current->next != NULL)
	{
		if(maxNode->item < Current->next->item){
			maxNode = Current->next;
			Prev = Current;
		}
		Current = Current->next;
	}

	if (Prev == NULL)
		return maxNode->item;

	Prev->next = maxNode->next;
	maxNode->next = *ptrHead;
	*ptrHead = maxNode;

	return maxNode->item;
}