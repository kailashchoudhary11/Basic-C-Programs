#include<stdio.h>

int main()
{
    int n = 10;
    int rem;
    int i = 0;
    int arr[10];

    while (n)
    {
        rem = n % 2;
        n = n / 2;
        arr[i] = rem;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
    
    
    return 0;
}