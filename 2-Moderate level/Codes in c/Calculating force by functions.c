#include <stdio.h>
float force(float mass);

int main()
{	
    float m;
    printf("Enter the value of mass in kgs \n",force(m));
    scanf("%f",&m);
    printf("The value of force in Newton is %.3f",force(m));    
    return 0;
}

float force(float mass)
{
    float result = mass * 9.8;
    return result;
}