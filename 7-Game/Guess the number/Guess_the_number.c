#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int number, guess, nguesses=1;
srand(time(0));
number=rand()%100+1;
// printf("The random number is %d",number);
do{
    printf("Guess the number between 1 to 100 \n");
    scanf("%d",&guess);
    if(guess>number)
    {
        printf("Lower number plz\n\n\n");
    }
    else if(guess<number)
    {
        printf("Higher number plz\n\n\n");
    }
    else
    {
        printf("You guessed it in %d attempts\n\n\n",nguesses);
    }
    nguesses++;
}while(guess!=number);
return 0;
}