#include<stdio.h>

int main()
{
   int i ,sum=0 ,n;
    printf("Enter a number \n");
    scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
      sum +=i;
   } 
   printf("The sum of given number is %d\n",sum);
return 0;
}