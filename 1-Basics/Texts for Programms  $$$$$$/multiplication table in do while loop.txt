#include<stdio.h>

int main()
{
int n=1;

printf("Multiplication table of 8 \n ");
do
{
    printf(" 8 x %d = %d\n",n,8*n);
    n++;
}while(n<=10);
return 0;
}