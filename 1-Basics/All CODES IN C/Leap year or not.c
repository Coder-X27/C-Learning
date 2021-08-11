#include<stdio.h>
int main()
{
int year;

printf("Enter the year \n ");
scanf("%d",&year);

if( year%4 )
    {
        printf("This is not a leap year");
    }
else if(year/100)
{
    printf("This is a leap year");   
}
else if(year/400)
{
    printf("This is a not leap year");   
}
else 
{
    printf("This is a leap year");   
}
return 0;
}