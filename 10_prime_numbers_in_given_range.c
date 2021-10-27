#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
    
}

int main()
{
    int low = 2;
    int high = 49;

    for (int i = low; i <= high; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}