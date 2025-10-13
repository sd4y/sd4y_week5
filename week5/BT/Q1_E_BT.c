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

int identical(BTNode* tree1, BTNode* tree2){
   /* add your code here */
   if (tree1 == NULL && tree2 == NULL) return 1;
   if (tree1 == NULL || tree2 == NULL) return 0;
   if (tree1->item != tree2->item) return 0;

   if (!identical(tree1->left, tree2->left)) return 0;
   if (!identical(tree1->right, tree2->right)) return 0;
   
    return 1;
}