#include <stdio.h>

int main()
{	
    int marks[5];
    
    for(int a=0;a<5;a++)
    {
        printf("Enter the marks for student %d :",a+1);
        scanf("%d",&marks[a]);
    }
    
    for(int a=0;a<5;a++)
    {
        printf("The marks for student is %d : %d\n ",a+1,marks[a]);
    }
    
    return 0;
}