#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct tNode
{
    int         iData;
    struct tNode* pNext;
    struct tNode* pPrev; 
}tNode;

typedef struct LinkedList
{
    tNode* pHead;
    tNode* pTail;
    int         iCount;
}tList;


void init_List(tList* pList);
void release_List(tList* pList); 
void push_back(tList* pList,const int data);
void push_front(tList* pList,const int data);
void insert(tList* pList,const int data);
void erase(tList* pList,const int data);
int listSize(tList* pList);
