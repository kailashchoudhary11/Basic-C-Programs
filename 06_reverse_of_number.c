#include<stdio.h>

int main()
{
    int num = 98;
    int rem ;
    int reverse = 0; 

    while (num)
    {
        rem = num % 10;
        num /= 10;
        reverse = reverse * 10 + rem;
    }

    printf("The reverse is %d\n", reverse);
    
    return 0;
}