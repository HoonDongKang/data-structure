#include <stdio.h>
#include <stdlib.h>
#include "ArrayPointList.h"
#include "Point.h"
#include "Point.c"
#include "ArrayList.c"

int main(void)
{
    List list;
    Point compPos;
    Point * ppos;

    ListInit(&list);

    //store 4 data
    ppos =(Point *)malloc(sizeof(Point));
    SetPointPos(ppos,2,1);
    LInsert(&list, ppos);

    ppos =(Point *)malloc(sizeof(Point));
    SetPointPos(ppos,2,2);
    LInsert(&list, ppos);

    ppos =(Point *)malloc(sizeof(Point));
    SetPointPos(ppos,3,1);
    LInsert(&list, ppos);

    ppos =(Point *)malloc(sizeof(Point));
    SetPointPos(ppos,3,2);
    LInsert(&list, ppos);

    //print data
    printf("the number of data : %d \n",LCount(&list));

    if(LFirst(&list, &ppos))
    {
        ShowPointPos(ppos);
        while(LNext(&list, &ppos))
            ShowPointPos(ppos);
    }
    printf("\n");

    //delete when xpos==2

    compPos.xpos=2;
    compPos.ypos=0;

    if(LFirst(&list, &ppos))
    {
        if(PointComp(ppos, &compPos)==1)
        {
            ppos=LRemove(&list);
            free(ppos);
        }

        while(LNext(&list, &ppos))
        {    
            if(PointComp(ppos, &compPos)==1)
            {
                ppos=LRemove(&list);
                free(ppos);
            }
        }
    }

    // print rest of the data
    printf("the number of current data : %d \n",LCount(&list));

    if(LFirst(&list, &ppos))
    {
        ShowPointPos(ppos);
        while(LNext(&list, &ppos))
            ShowPointPos(ppos);
    }
    printf("\n");

    return 0;
}