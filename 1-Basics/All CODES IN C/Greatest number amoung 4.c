#include<stdio.h>
int main()
{
int a, b, c ,d ;
printf("Enter four numbers \n");
scanf("%d%d%d%d",&a,&b,&c,&d);

if(a>b && a>c && a>d)
    {
        printf("The greater number amoung the 4 is %d",a);
    }
if(b>a && b>c && b>d)
    {
        printf("The greater number amoung the 4 is %d",b);
    }
else if(c>b && c>a && c>d)
    {
        printf("The greater number amoung the 4 is %d",c);
    }
else
    {
        printf("The greater number amoung the 4 is %d",d);
    }

return 0;
}