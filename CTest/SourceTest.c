#include <stdio.h>
#include "malloc.h"
#include "HeaderTest.h"
typedef struct Stack_t {
    int item;
    struct Stack *next;
} Stack;

Stack *CreateStack()
{
    Stack* top = (Stack *)malloc(sizeof(Stack));
    return top;
}
void DeleteStack(Stack* top)
{
    while (top != NULL)
    {
        Stack* temp = top;
        top = top->next;
        free(temp);
    }
}
StackPush(Stack *top, int item)
{
    Stack *temp = (Stack *)malloc(sizeof(Stack));
    temp->item = item;
    temp->next = top;
    top = temp;
}

int StackPop(Stack *top) 
{
    Stack *temp = top;
    if (top == NULL) return;
    int pop = temp->item;
    top = temp->next;
    free(temp);
    return pop;
}

size_t StackSize(Stack *top)
{
    Stack *temp = top;
    size_t count = 0;
    while (temp != NULL)
    {
        ++count;
        temp = temp->next;
    }
    return count;
}


void StackPrint(Stack* top)
{
    Stack *temp = top;
    while (temp != NULL) {
        printf("%d", temp->item);
        temp = temp->next;
    }
    printf("\n");
}

