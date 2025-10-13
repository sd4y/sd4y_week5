#include <stdio.h>
#include <stdlib.h>

typedef struct _btnode{
	int item;
	struct _btnode *left;
	struct _btnode *right;
} BTNode;  

typedef struct _stackNode{
    BTNode *btnode;
    struct _stackNode *next;
}StackNode;

typedef struct _stack{
    StackNode *top;
}Stack;


int hasGreatGrandchild(BTNode *node);
int smallestValue(BTNode *node);
void printSmallerValues(BTNode *node, int m);
void mirrorTree(BTNode *node);
int sumOfOddNodes(BTNode *root);
int countOneChildNodes(BTNode *node);
int maxHeight(BTNode *node);
int identical(BTNode *tree1, BTNode *tree2);

BTNode* createBTNode(int item);

BTNode* createTree();
void push( Stack *stk, BTNode *node);
BTNode* pop(Stack *stk);

void printTree(BTNode *node);
void removeAll(BTNode **node);


int main(){

    return 0;
}

int hasGreatGrandchild(BTNode *node){
	/* add your code here */
}

int smallestValue(BTNode *node){
	/* add your code here */
}

void printSmallerValues(BTNode *node, int m){
	/* add your code here */
}

void mirrorTree(BTNode *node){
	/* add your code here */
}

int sumOfOddNodes(BTNode *node){
    /* add your code here */
}

int countOneChildNodes(BTNode *node){
    /* add your code here */
}

int maxHeight(BTNode *node){
    /* add your code here */
}

int identical(BTNode *tree1, BTNode *tree2){
    /* add your code here */
}

BTNode *createBTNode(int item){

    return;
}

BTNode *createTree(){

    return;
}

void push( Stack *stk, BTNode *node){
    
}

BTNode* pop(Stack *stk){
   
    return;
}

void printTree(BTNode *node){
 
}

void removeAll(BTNode **node){
  
}