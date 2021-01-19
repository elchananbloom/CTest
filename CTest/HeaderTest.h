#pragma once
#include <cstddef>
#include <stdio.h>
/**
*    struct for the stack linked list
*/
typedef struct Node_t Stack;
/**
* @brief create a linked list stack
* @return linked list stack
*/
Stack *CreateStack();
/**
* @brief delete a stack
* @param stack's root
*/
void DeleteStack(Stack *top);
/**
* @brief push item to the root stack
* @param stack's root
* @param item to push to the stack
*/
StackPush(Stack *top, int item);
/**
* @brief pop the root item
* @param stack's root
* @return the first item
*/
int StackPop(Stack *top);
/**
* @param stack's root
* @return the stack's size
*/
size_t StackSize(Stack *top);
/**
* @brief prints all the items in the stack
* @param stack's root
*/
void StackPrint(Stack *top);
