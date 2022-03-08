#include <stdio.h>

int main()
{
    int num, is_primo = 1;

    printf("Insira um numero: \n");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            is_primo = 0;
        }
    }

    if (is_primo == 0)
    {
        printf("O numero nao e primo\n");
    }
    else
    {
        printf("O numero e primo\n");
    }

    return 0;
}