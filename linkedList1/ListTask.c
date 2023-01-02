#include <stdio.h>
#include "ArrayList.h"
#include "ArrayList.c"

int main(void){
    List list;
    int data, i;
    int total=0;
    ListInit(&list);

    // 1~9 삽입
    for (i=0;i<10;i++){
        LInsert(&list,i);
    }

    printf("Counting data : %d \n",LCount(&list));

    // list 총 합
    if(LFirst(&list, &data))
    {
        printf("%d ", data);
        total+=data;
        while(LNext(&list,&data)){
            total+=data;
            printf("%d ",data);
        }
    }
    printf("\ntotal: %d",total);

    // list 조건부 삭제
    if(LFirst(&list,&data))
    {
        if(data%3==0 || data%2 ==0)
        {
            LRemove(&list);
        }
        while(LNext(&list, &data)){
            if(data%3==0 || data%2 ==0)
            {
                LRemove(&list);
            }
        }
    }
    // list 조회 
    if(LFirst(&list, &data))
    {
        printf("\n%d ", data);
        while(LNext(&list,&data)){
            printf("%d ",data);
        }
    }
    printf("\n\n");

    return 0;
}