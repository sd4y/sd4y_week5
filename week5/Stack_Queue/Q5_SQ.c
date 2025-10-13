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

ListNode* reverseHelper(ListNode *current) {
    if (current->next == NULL) 
        return current;
    
    ListNode *newHead = reverseHelper(current->next);
    
    current->next->next = current;
    current->next = NULL;
    
    return newHead;
}

void recursiveReverse(Queue *q) {
    if (q == NULL || q->ll.head == NULL) 
        return;

    q->ll.head = reverseHelper(q->ll.head);
}
