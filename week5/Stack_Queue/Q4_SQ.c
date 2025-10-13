#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct _listnode{
   int item;
   struct _listnode *next;
} ListNode;

typedef struct _linkedlist{
   int size;
   ListNode *head;
   ListNode *tail;
} LinkedList;

typedef struct _queue{
	LinkedList ll;
} Queue;

void reverse(Queue *q){
/* add your code here */
   if (q == NULL || q->ll.head == NULL) 
      return;

   if (q->ll.head == q->ll.tail) 
        return;
    
   ListNode* prev = NULL;
   ListNode* current = q->ll.head;
   ListNode* next = NULL;
   
   q->ll.head = q->ll.tail;
   q->ll.tail = current;
   
   while(current){
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
   }
}
