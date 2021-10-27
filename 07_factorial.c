#include<stdio.h>

int fact(int n)
{  
   
    if (n == 0 || n == 1)   // <--  base condition 
    {
        return 1;
    }
    return n * fact(n - 1);  // <-- recurrence relationship
}

int main()
{
    int n = 10;
    int factorial = 1;


    // // Using iterative approach 

    // for (int i = n; i > 1; i--)
    // {
    //     factorial *= i;
    // }

    // printf("Factorial of %d is %d\n", n, factorial);

    // Using iterative approach
    
    printf("Factorial of %d is %d\n", n, fact(n));

    return 0;
}