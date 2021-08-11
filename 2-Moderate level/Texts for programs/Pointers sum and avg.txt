#include <stdio.h>

void Sum_and_Avg(int a, int b, int *sum, float *avg) 
{
    *sum=a+b;
    *avg=(float)(a+b)/2;
}
int main()
{	
    int i,j,sum;
    float avg;
    i=3;
    j=6;
    Sum_and_Avg(i,j,&sum,&avg);
    printf("The addition of value is %d\n",sum);
    printf("The avg of 2numbers is %f",avg);
    return 0;
}