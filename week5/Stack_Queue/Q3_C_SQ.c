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

typedef struct stack{
	LinkedList ll;
} Stack;

int isStackPairwiseConsecutive(Stack *s){
  /* add your code here */
  if (s == NULL || s->ll.head == NULL)  return 0;
  if (s->ll.size % 2 != 0) return 0;

   ListNode* current1 = s->ll.head;
   ListNode* current2 = current1 ? current1->next : NULL;

   while (current1 != NULL && current2 != NULL){
      int diff = current1->item - current2->item;
      if (diff != 1 && diff != -1)
         return 0;

      current1 = current2->next;
      if (current1 == NULL)
         break;
      current2 = current1->next;
   }
   return 1;   
}

// 더 간단한 버전
int isStackPairwiseConsecutive(Stack *s){
    if (s == NULL || s->ll.head == NULL) return 1;  

    if (s->ll.size % 2 != 0) return 0;
    
    ListNode *curr = s->ll.head;
    
    while (curr != NULL && curr->next != NULL) {
        int diff = curr->item - curr->next->item;
        
        if (diff != 1 && diff != -1) return 0;

        curr = curr->next->next;
    }
    return 1;
}