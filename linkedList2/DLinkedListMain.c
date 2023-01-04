#include <stdio.h>
#include "DLinkedList.h"
#include "DLinkedList.c"

int WhoisPrecede(int d1, int d2)
{
    if(d1<d2)
        return 0;
    else    
        return 1;
}

int main(void)
{
    //initialize
    List list;
    int data;
    ListInit(&list);

    SetSortRule(&list,WhoisPrecede);

    //insert
    LInsert(&list,11);LInsert(&list,11);
    LInsert(&list,22);LInsert(&list,22);
    LInsert(&list,33);

    //print
    printf("the current number of data: %d \n",LCount(&list));
    
    if(LFirst(&list,&data))
    {
        printf("%d \n",data);
        while(LNext(&list,&data))
            printf("%d \n",data);
    }
    printf("\n\n");

    //remove
    if(LFirst(&list,&data))
    {
        if(data==22)
            LRemove(&list);
        while(LNext(&list,&data))
        {    
            if(data==22)
                LRemove(&list);
        }
    }
    //print rest data
    printf("the current number of data: %d \n",LCount(&list));

    if(LFirst(&list,&data))
    {
        printf("%d \n",data);
        while(LNext(&list,&data))
            printf("%d \n",data);
    }
    printf("\n\n");
    
    return 0;
}