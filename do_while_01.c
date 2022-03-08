#include <stdio.h>

int main()
{
    int num = 0, sum = 0, show = 0;

    do
    {
        sum += num;
        if (show)
        {
            printf("A soma ate agora eh de %d\n", sum);
        }
        printf("Informe um numero positivo ou um negativo para encerrar a soma: ");
        scanf("%d", &num);
        show = 1;
    } while (num >= 0);

    printf("O programa foi encerrado. A soma foi %d", sum);
    return 0;
}