#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"
#include "ArrayNameCardList.h"

NameCard * MakeNameCard(char * name, char * phone)
{
    NameCard * newCard=(NameCard *)malloc(sizeof(NameCard));
    strcpy(newCard->name,name);
    strcpy(newCard->phone,phone);
    return newCard;
};

void ShowNameCardInfo(NameCard *pcard)
{
    printf("[Name] %s \n",pcard->name);
    printf("[Phone] %s \n",pcard->phone);
};

int NameCompare( NameCard * pCard, char * name)
{
    return strcmp(pCard->name,name);
};

void ChangePhoneNum(NameCard * pcard, char * phone)
{
    strcpy(pcard->phone,phone);
};
