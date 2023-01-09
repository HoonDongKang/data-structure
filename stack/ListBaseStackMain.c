#include <stdio.h>
#include "ListBaseStack.h"
#include "ListBaseStack.c"

int main(void)
{
    //initialize stack
    Stack stack;
    StackInit(&stack);

    //insert data
    SPush(&stack,1);SPush(&stack,2);
    SPush(&stack,3);SPush(&stack,4);
    SPush(&stack,5);

    //pop data
    while(!SIsEmpty(&stack))
        printf("%d ",SPop(&stack));

    return 0;
}