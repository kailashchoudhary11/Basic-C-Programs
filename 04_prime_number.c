#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    // printf("Enter the number you want to check\n");
    // scanf("%d", &num);

    int root = pow(num, 0.5);
    int key = 1;

    for (int i = 2; i <= root; i++)
    {
        if (num % i == 0)
        {
            key = 0;
            break;
        }
    }
    if (key)
    {
        printf("%d is a prime number\n", num);
    }
    else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}