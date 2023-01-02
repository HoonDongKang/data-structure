#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "NameCard.c"
#include "ArrayList.c"
#include "ArrayNameCardList.h"

int main(void)
{
    List list;
    NameCard * pcard;
    ListInit(&list);

    //insert three people data
    pcard = MakeNameCard("이진수","010-1111-2222");
    LInsert(&list,pcard);
    
    pcard = MakeNameCard("한지영","010-2222-3333");
    LInsert(&list,pcard);    
    
    pcard = MakeNameCard("조수진","010-3333-4444");
    LInsert(&list,pcard);

    if(LFirst(&list,&pcard))
    {
        if(!NameCompare(pcard,"한지영"))
        {
            ShowNameCardInfo(pcard);
        }
        else
        {
            while(LNext(&list,&pcard))
            {
                if(!NameCompare(pcard,"한지영"))
                {
                    ShowNameCardInfo(pcard);
                    break;
                }
            }
        }
    }

    //change data
    if(LFirst(&list, &pcard))
    {
        if(!NameCompare(pcard,"이진수"))
        {
            ChangePhoneNum(pcard,"010-9999-9999");
        }
        else{
            while(LNext(&list,&pcard))
            {
                if(!NameCompare(pcard,"이진수"))
                {
                    ChangePhoneNum(pcard,"010-9999-9999");
                    break;
                }
            }
        }
    }

    //remove data
        if(LFirst(&list, &pcard))
    {
        if(!NameCompare(pcard,"조수진"))
        {
           pcard=LRemove(&list);
           free(pcard);
        }
        else{
            while(LNext(&list,&pcard))
            {
                if(!NameCompare(pcard,"조수진"))
                {
                    pcard=LRemove(&list);
                    free(pcard);
                    break;
                }
            }
        }
    }

    //print all data
    printf("the number of current data : %d \n",LCount(&list));
        if(LFirst(&list, &pcard))
    {
        ShowNameCardInfo(pcard);
        while(LNext(&list, &pcard))
            ShowNameCardInfo(pcard);
    }
    return 0;
}