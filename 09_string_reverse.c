#include <stdio.h>

int main()
{
    char name[] = "Kailas";
    int size = sizeof(name) - 1;
    char temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = name[i];
        name[i] = name[size - i - 1];
        name[size - i - 1] = temp;
    }
    printf("%s", name);

    return 0;
}