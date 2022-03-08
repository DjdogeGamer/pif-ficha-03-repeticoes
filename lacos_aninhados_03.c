#include <stdio.h>

int main()
{
    int length;

    printf("Informe o tamanho do quadrado: ");
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (j == i || j + i == length - 1)
            {
                printf("X");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}