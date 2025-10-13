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

void moveEvenItemsToBack(LinkedList *ll){
	ListNode* CurrentNode = ll->head;
	ListNode* PrevNode = NULL;

	ListNode* odd_tail = NULL;
	ListNode* even_head = NULL;
	ListNode* even_tail = NULL;

	while(CurrentNode != NULL){
		ListNode* nextNode = CurrentNode->next;

		if(CurrentNode->item % 2 == 0){
			if(PrevNode == NULL) ll->head = nextNode;
			else PrevNode->next = nextNode;

			CurrentNode->next = NULL;
			
			if(even_head == NULL){
				even_head = CurrentNode;
				even_tail = CurrentNode;
			}else{
				even_tail->next = CurrentNode;
				even_tail = CurrentNode;
			}
		}else{
			PrevNode = CurrentNode;
			odd_tail = CurrentNode;
		}
		CurrentNode = nextNode;
	}
	if (even_head == NULL) return;

	if(odd_tail == NULL) ll->head = even_head;
	else odd_tail->next = even_head;
}