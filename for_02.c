#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Insira um numero: \n");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    printf("A soma dos divisores e: %d\n", sum);

    return 0;
}