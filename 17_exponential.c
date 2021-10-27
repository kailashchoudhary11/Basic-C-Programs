#include<stdio.h>

int main()
{
    int m = 2;
    int pow = 5;
    int val = 1;
    while (pow != 0)
    {
        val *= m;
        pow --;
    }
    printf("The answer is %d \n", val);
       
    return 0;
}