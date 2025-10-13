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

void alternateMergeLinkedList(LinkedList *ll1, LinkedList *ll2){
	ListNode* current1 = ll1->head;
	ListNode* current2 = ll2->head;

	if (current1 == NULL){
		ll1->head = current2;
		return;
	}

	if (current2 == NULL) return;
	
	ListNode* nextNode1;
	ListNode* nextNode2;

	//  ll1 = {A, B, C}, ll2 = {X, Y, Z}  가정했을 때 시뮬
	while(current1 != NULL && current2 != NULL){
		nextNode1 = current1->next; // nextNode1 = &B    #B->C->NULL
		nextNode2 = current2->next; // nextNode2 = &Y  #Y->Z->NULL

		current1->next = current2; // A-> X-> Y-> Z-> NULL
		current2->next = nextNode1; // X-> B-> C-> NULL

		current1 = nextNode1; // current1 == B, C
		current2 = nextNode2; // current2 == Y, Z
	}	
}