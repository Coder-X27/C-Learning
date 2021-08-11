#include<stdio.h>
int main()
{
int rating;
printf("Enter your ratings between (1-5)");
scanf("%d",&rating);

switch(rating)
{
    case 1:
          printf("Your number is 1");
          break;
    case 2:
          printf("Your number is 2");
          break;
    case 3:
          printf("Your number is 3 ");
          break;
    case 4:
          printf("Your number is 4");
          break;
    case 5:
          printf("Your number is 5");
          break;
     default :
          printf("Your number is invalid default");
          break;
}
    return 0;
}