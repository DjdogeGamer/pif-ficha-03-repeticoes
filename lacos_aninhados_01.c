#include <stdio.h>

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int o = 0; o < i; o++)
        {
            printf("0");
        }

        for (int x = 5 - i; x > 0; x--)
        {
            printf("x");
        }
        printf("\n");
    }

    return 0;
}