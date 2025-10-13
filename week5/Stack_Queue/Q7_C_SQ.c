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

int balanced(char* expression){
/* add your code here */
	Stack s;
	s.ll.size = 0;
	s.ll.head = NULL;

	for (int i = 0; expression[i] != NULL; ++i){
		char c = expression[i];

		if (c == '{' || c == '[' || c == '('){
			ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
			newNode->item = c;
			newNode->next = s.ll.head;
			s.ll.head = newNode;
			++s.ll.size;
		}
		else if (c == '}' || c == ']' || c == ')'){
			if (s.ll.head == NULL) return 0;

			char top = s.ll.head->item;

			int isMatched = 0;
			if (c == '}' && top == '{') isMatched = 1;
			else if  (c == ']' && top == '[') isMatched = 1;
			else if  (c == ')' && top == '(') isMatched = 1;

			if (!isMatched){
				while (s.ll.head != NULL){
					ListNode* pTemp = s.ll.head;
					s.ll.head = s.ll.head->next;
					free(pTemp);
				}
				return 0;
			}
			ListNode* pTemp = s.ll.head;
			s.ll.head = s.ll.head->next;
			free(pTemp);
			--s.ll.size;
		}
	}
	int result = (s.ll.head == NULL) ? 1 : 0;
	while (s.ll.head != NULL){
		ListNode* temp = s.ll.head;
		s.ll.head = s.ll.head->next;
		free(temp);
	}
	return result;
}
