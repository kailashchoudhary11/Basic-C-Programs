#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number whose multiplication table is required\n");
    scanf("%d", &num);

    printf("Multiplication table of %d is: \n", num);

    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", num, i+1, num * (i+1));
    }
    

    return 0;
}