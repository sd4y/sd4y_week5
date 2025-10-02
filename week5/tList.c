#include "tList.h"

void init_List(tList *pList)
{
    pList->pHead = NULL;
    pList->pTail = NULL;
    pList->iCount = 0;
}

void release_List(tList* pList)
{
    tNode* deleteNode = pList->pTail;
    tNode* nextNode;
    while (deleteNode)
    {
        nextNode = deleteNode->pNext;
        free(deleteNode); 
        deleteNode = nextNode;
    }
    pList->pHead = NULL;
    pList->pTail = NULL;
    pList->iCount = 0;
}

void push_back(tList* pList, const int data)
{
    tNode* NewNode = (tNode*)malloc(sizeof(tNode));
    NewNode->iData = data;
    NewNode->pNext = NULL;
    NewNode->pPrev = NULL;
    if(pList->pHead == NULL)
    {
        pList->pHead = NewNode;
        pList->pTail = NewNode;
    }
    else
    {
        tNode* temp = pList->pTail;
        NewNode->pPrev = temp;
        temp->pNext = NewNode;
        pList->pTail = NewNode;
    }
    ++pList->iCount;
}

void push_front(tList* pList, const int data)
{
    tNode* NewNode = (tNode*)malloc(sizeof(tNode));
    NewNode->iData = data;
    NewNode->pNext = NULL;
    NewNode->pPrev = NULL;
    if(pList->pHead == NULL)
    {
        pList->pHead = NewNode;
        pList->pTail = NewNode;
    }
    else
    {
        tNode* temp = pList->pHead;
        NewNode->pNext = temp;
        temp->pPrev = NewNode;
        pList->pHead = NewNode;
    }
    ++pList->iCount;
}

void insert(tList* pList, const int data)
{


}

void erase(tList* pList, const int data)
{
    tNode* target = pList->pHead;

    if (pList->iCount == 1)
    {
        free(target);
        pList->pHead = NULL;
        pList->pTail = NULL;
        pList->iCount = 0;
        return;
    }

    while (target)
    {
        if (target->iData == data)
        {
            if(target == pList->pHead)
            {
                target->pNext->pPrev = NULL;
                pList->pHead = target->pNext;
            }
            else if (target == pList->pTail)
            {
                target->pPrev->pNext = NULL;
                pList->pTail = target->pPrev;
            }
            else
            {
                target->pPrev->pNext = target->pNext;
                target->pNext->pPrev = target->pPrev;
            }
            free(target);
            --pList->iCount;
            return;
        }
        else
        {
            target = target->pNext;
        }
    }
}

int listSize(tList* pList)
{
    return pList->iCount;
}