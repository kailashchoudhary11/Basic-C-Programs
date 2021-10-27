#include<stdio.h>

int main()
{
    int n;
    int count = 0;
    printf("Enter the number\n");
    scanf("%d", &n);

    while (n != 0)
    {
        n /= 10;
        count ++;
    }
    printf("The number of digits are %d\n", count);
    
    return 0;
}