#pragma once

typedef struct Node
{
    int         iData;
    tNode* pNext;
    tNode* pPrev; 
}tNode;

typedef struct LinkedList
{
    tNode* pHead;
    tNode* pTail;
    int         iCount;
}tList;


void init_List(tList* pList);
void release_List(tList* pList); 
void push_back(tList* pList, int data);
void push_front(tList* pList, int data);
void insert(tList* pList, int data);
void erase(tList* pList, int data);
void size(tList* pList);
