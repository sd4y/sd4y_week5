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

void RecursiveReverse(ListNode** ptrHead)
{
	/* add your code here */
	if (*ptrHead == NULL || (*ptrHead)->next == NULL )
		return;

	ListNode* Head = *ptrHead;
	ListNode* Rest = Head->next;

	RecursiveReverse(&Rest);

	Head->next->next = Head;
	Head->next = NULL;

	*ptrHead = Rest;
}