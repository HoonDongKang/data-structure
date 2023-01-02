#include <stdio.h>
#include <stdlib.h>
#include "ArrayPointList.h"
#include "Point.h"
#include "Point.c"

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

    ppos =(Point *)maglloc(sizeof(Point));
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
        ShowPointPos
    }
}