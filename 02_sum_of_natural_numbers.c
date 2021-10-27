#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);

    int sum = 0;
    // for (int i = 1; i <= num; i++)
    // {
    //     sum += i;
    // }

    sum = num * (num + 1) / 2;

    printf("The sum of first %d natural numbers is %d\n", num, sum);
    return 0;
}