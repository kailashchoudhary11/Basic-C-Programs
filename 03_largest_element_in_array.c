#include<stdio.h>

int getMax(int *arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
    
}

int main()
{
    int arr[] = {2, 33, 54444, 9888, 1022, 112, 883};
    int size = sizeof(arr) / sizeof(int);
    int max = getMax(arr, size);

    printf("The largest element in the array is %d\n", max);
    return 0;
}