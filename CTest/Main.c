#include "HeaderTest.h"


int main(void)
{
    Stack *stack = CreateStack();
    StackPush(stack, 1);
    StackPush(stack, 2);
    StackPush(stack, 3);
    StackPush(stack, 4);
    StackPush(stack, 5);
    StackPrint(stack);
    printf(StackSize(stack));
    printf(StackPop(stack));
    printf(StackPop(stack));
    printf(StackPop(stack));
    printf(StackPop(stack));
    DeleteStack(stack);
    printf(StackPop(stack));
    return 0;
}