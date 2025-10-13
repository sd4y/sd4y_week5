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

void moveOddItemsToBack(LinkedList *ll)
{
	/* add your code here */
	ListNode* CurrentNode = ll->head;
	ListNode* PrevNode = NULL;

	ListNode* even_tail = NULL;
	ListNode* odd_head = NULL;
	ListNode* odd_tail = NULL;

	while(CurrentNode != NULL)	{
		ListNode* nextNode = CurrentNode->next;

		if(CurrentNode->item % 2 != 0){
			if(PrevNode == NULL) ll->head = nextNode;			
			else PrevNode->next = nextNode;

			CurrentNode->next = NULL;

			if(odd_head == NULL){
				odd_head = CurrentNode;
				odd_tail = CurrentNode;
			}else{
				odd_tail->next = CurrentNode;
				odd_tail = CurrentNode;
			}
		}else{
			PrevNode = CurrentNode;
			even_tail = CurrentNode;
		}
		CurrentNode = nextNode;
	}
	if (odd_head == NULL)return;

	if(even_tail == NULL) ll->head = odd_head;
	else even_tail->next = odd_head;
}