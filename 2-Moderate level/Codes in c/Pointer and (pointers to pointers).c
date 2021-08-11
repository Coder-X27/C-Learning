#include <stdio.h>

int main()
{	
    
int i=34;
int *j=&i;//j stores the value of i.
printf("The value of i is %d\n",i);//------->line 8 and 19 tells us the same meaning;
printf("The value of i is %d\n",*j);
printf("The address of i is %u\n",&i);//------->line 10, 11 and 13 tells us the same meaning;
printf("The address of i is %u\n",j);
printf("The address of j is %u\n",&j);
printf("The value of j is %u\n",*(&j));
return 0;
} 