#include <stdio.h>

int main()
{	
    int math[4];
    printf("Enter the marks of 1st student is :");
    scanf("%d",&math[0]);
    printf("Enter the marks of 2nd student is :");
    scanf("%d",&math[1]);
    printf("Enter the marks of 3rd student is :");
    scanf("%d",&math[2]);
    printf("Enter the marks of 4th student is :");
    scanf("%d",&math[3]);
    printf("The entered marks are %d %d %d and %d",math[0],math[1],math[2],math[3]);

    return 0;
}