#include <stdio.h>
#include <stdlib.h>

#define MIN_INT -1000

typedef struct _listnode{
	int item;
	struct _listnode *next;
} ListNode;	

typedef struct _linkedlist{
	int size;
	ListNode *head;
} LinkedList;	

typedef struct _stack{
	LinkedList ll;
}Stack;  

void removeUntil(Stack *s, int value){
/* add your code here */
	if (s == NULL || s->ll.head == NULL) return;

	ListNode* pCurr = s->ll.head;
	ListNode* pPrev = NULL;

	while(pCurr != NULL && pCurr->item != value){
		pPrev = pCurr;
		pCurr = pCurr->next;
		free(pPrev);
		--s->ll.size;
	}
	s->ll.head = pCurr;
}
