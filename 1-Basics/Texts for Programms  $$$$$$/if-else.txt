#include<stdio.h>
int main()
{
   int a;
   printf("Enter a number");
   scanf("%d",&a);

   (a <= 5) ? printf("A is less than 5") : printf("A is greater than 5");
    return 0;
}