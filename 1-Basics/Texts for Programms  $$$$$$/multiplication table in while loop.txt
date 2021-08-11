#include<stdio.h>

int main()
{
int n;

printf("Multiplication table of 8 \n ");
while(n<=100)
{
    printf(" 8 x %d = %d\n",n,8*n);
    n++;
}
return 0;
}