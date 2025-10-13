#include <stdio.h>
#include <stdlib.h>

#define MIN_INT -1000

typedef struct _listnode{
	int item;
	struct _listnode* next;
} ListNode;	

typedef struct _linkedlist{
	int size;
	ListNode* head;
} LinkedList;	

typedef struct _stack{
	LinkedList ll;
}Stack;  

void createStackFromLinkedList(LinkedList* ll, Stack* s){
    /* add your code here */
	s->ll.head = ll->head;
	s->ll.size = ll->size;
	ll->head = NULL;
	ll->size = 0;
}

void removeEvenValues(Stack* s){
/* add your code here */
    if (s == NULL || s->ll.head == NULL) {
        return;
    }
    ListNode* prev = NULL;
    ListNode* current = s->ll.head;
    
    while (current != NULL) {
        if (current->item % 2 == 0) {  
            ListNode* temp = current;
            
            if (prev == NULL) {  
                s->ll.head = current->next;
                current = s->ll.head;
            } 
			else {
                prev->next = current->next;
                current = current->next;
            }
            free(temp);
            --s->ll.size;
        } 
		else {  
            prev = current;
            current = current->next;
        }
    }
}


void removeEvenValues(Stack* s){
	/* add your code here */
	Stack temp;
	temp.ll.head = NULL;
	temp.ll.size = 0;

	while (s->ll.head != NULL){
		ListNode* NewNode = s->ll.head;
		int value = NewNode->item;
		s->ll.head = s->ll.head->next;
		--s->ll.size;

		if (value % 2 != 0) { 
            NewNode->next = temp.ll.head;
            temp.ll.head = NewNode;
            ++temp.ll.size;
		}
		else{
			free(NewNode);
		}
	}
	while (temp.ll.head != NULL) {
		ListNode* node = temp.ll.head;
		temp.ll.head = temp.ll.head->next;
		--temp.ll.size;

		node->next = s->ll.head;
		s->ll.head = node;
		++s->ll.size;
		}
}
