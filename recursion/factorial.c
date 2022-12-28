#include<stdio.h>

int Factorial(int n)
{
	if(n==0)
    	return 1;
    else
    	return n * Factorial(n-1);
}

int main(void)
{
	printf("3!= %d \n", Factorial(3));
}
