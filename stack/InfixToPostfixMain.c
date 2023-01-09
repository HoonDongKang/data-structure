#include <stdio.h>
#include "InfixToPostfix.h"
#include "InfixToPostfix.c"

int main(void)
{
    char exp1[]="1+2*3";
    char exp2[]="(1+2)*3";
    char exp3[]="((1+2)*3)*(5-2)";

    ConvToRPNExp(exp1);
    ConvToRPNExp(exp2);
    ConvToRPNExp(exp3);

    printf("%s \n",exp1);
    //123*+ 
    printf("%s \n",exp2);
    //12+3* 
    printf("%s \n",exp3);
    //12+3*52-* 

    return 0;
}