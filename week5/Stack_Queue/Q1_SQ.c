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

typedef struct _queue{
	LinkedList ll;
} Queue; 

void createQueueFromLinkedList(LinkedList *ll, Queue *q){
	/* add your code here */
	q->ll.head = ll->head;
	q->ll.size = ll->size;
	ll->head = NULL;
	ll->size = 0;
}

void removeOddValues(Queue *q){
    if (q == NULL || q->ll.head == NULL) {
        return;
    }
    
    int original_size = q->ll.size;
    ListNode *tail = NULL; 
    
    for (int i = 0; i < original_size; i++) {
        ListNode *temp = q->ll.head;
        int current_item = temp->item;
        
        q->ll.head = q->ll.head->next;
        ++q->ll.size;

        if (current_item % 2 == 0) {
            temp->next = NULL; 
            
            if (q->ll.head == NULL) {
                q->ll.head = temp;
                tail = temp;
            } 
			else {
                if (tail == NULL) {
                    tail = q->ll.head;
                    while (tail->next != NULL) {
                        tail = tail->next;
                    }
                }
                tail->next = temp;
                tail = temp;
            }
            ++q->ll.size;
        } 
		else {
            free(temp);
        }
    }
}
