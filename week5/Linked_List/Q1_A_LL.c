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

int insertSortedLL(LinkedList *ll, int item)
{
	/* add your code here */
	ListNode* NewNode = (ListNode*)malloc(sizeof(ListNode));
	NewNode->item = item;
	NewNode->next = NULL;
	if (ll->size == 0)
	{
		ll->head = NewNode;
		++ll->size;
		return;
	}
	ListNode* target = ll->head;
	ListNode* prev = NULL;
	while(target && ll->size)
	{
		if (target->item < item)
		{
			prev = target;
			target = target->next;
		}
		else
		{
			NewNode->next = target->next;
			prev->next = NewNode;
			break;
		}
	}
	++ll->size;	
}