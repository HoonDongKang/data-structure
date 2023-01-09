#include <stdio.h>
#include "PostCalculator.h"
#include "PostCalculator.c"

int main(void)
{
    char postExp1[]="42*8+";
    char postExp2[]="123+*4/";

    printf("%s=%d \n",postExp1,EvalRPNExp(postExp1));
    //42*8+=16 
    printf("%s=%d \n",postExp2,EvalRPNExp(postExp2));
    //123+*4/=1 
    return 0;
}