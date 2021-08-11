#include <stdio.h>

void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    goodmorning();
    return 0;
}

void goodmorning()
{
    printf("Good morning Karan\n");
    goodafternoon();
}

void goodafternoon()
{
    printf("Good afternoon Karan\n");
    goodnight();
}

void goodnight()
{
    printf("Good night Karan\n");
}
