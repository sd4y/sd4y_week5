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

int insertSortedLL(LinkedList *ll, int item)
{
	// 노드 생성 및 초기화 
	ListNode* NewNode = (ListNode*)malloc(sizeof(ListNode));
	NewNode->item = item;
	NewNode->next = NULL;

	// 리스트가 비어 있다면 새로 만든 노드를 Head로 지정하고 리스트 사이즈 증가
	if (ll->size == 0)	{
		ll->head = NewNode;
		++ll->size;
		return;
	}

	// 리스트가 비어있지 않았다면 노드를 순회하며 삽입될 위치 찾기
	ListNode* target = ll->head;
	ListNode* prev = NULL;
	while(target != NULL){
		// 탐색중인 노드와 새로 만든 노드의 item 값 비교
		if (target->item < item){
			prev = target;
			target = target->next;
		}
		// 새로 만든 노드의 item 값이 더 작으면 해당 위치가 삽입 될 위치
		else{
			NewNode->next = target->next;
			prev->next = NewNode;
			break;
		}
	}
	++ll->size;	
}