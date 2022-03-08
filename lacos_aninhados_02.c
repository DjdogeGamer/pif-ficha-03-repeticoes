#include <stdio.h>

int main()
{
    int fact, num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    for (int j = 0; j < num; j++)
    {
        fact = 1;
        for (int i = 1; i <= num - j; i++)
        {
            fact *= i;
        }
        printf("O fatorial de %d eh: %d\n", num - j, fact);
    }

    return 0;
}