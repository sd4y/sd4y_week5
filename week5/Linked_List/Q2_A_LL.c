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

void alternateMergeLinkedList(LinkedList *ll1, LinkedList *ll2)
{
    /* add your code here */
}