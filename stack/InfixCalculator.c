#include <stdio.h>
#include <stdlib.h>
#include "PostCalculator.h"
#include "PostCalculator.c"
#include "InfixToPostfix.h"
#include "InfixToPostfix.c"

int EvalInfixExp(char exp[])
{
    int len = strlen(exp);
    int ret;
    char *expcpy = (char*)malloc(len+1);
    strcpy(expcpy, exp);

    ConvToRPNExp(expcpy);
    ret=EvalRPNExp(expcpy);

    free(expcpy);
    return ret;
}