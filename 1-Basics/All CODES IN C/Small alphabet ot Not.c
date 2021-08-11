#include<stdio.h>
int main()
{
char ch;
printf("Enter an alphabet \n");
scanf("%c",&ch);

if(ch>=97 && ch<=122)
    {
        printf("It is a small Alphabet");
    }
else
    {
        printf("ERROR");
    }
return 0;
}
