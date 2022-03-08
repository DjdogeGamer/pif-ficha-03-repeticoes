#include <stdio.h>

int main()
{
    double avg = 0, even_avg = 0;
    int num = 1, sum = 0, i = 0, high = 0, low = 0, even_sum = 0, even_qt = 0;
    int first = 0;

    while (num != 0)
    {

        printf("Informe um numero: \n");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        sum += num;

        if (num > high || first == 0)
        {
            high = num;
        }
        if (num < low || first == 0)
        {
            low = num;
        }
        if (num % 2 == 0)
        {
            even_qt++;
            even_sum += num;
        }

        i++;
        first = 1;
    }

    if (even_qt > 0)
    {
        even_avg = (float)even_sum / even_qt;
    }
    if (i > 0)
    {
        avg = (float)sum / (float)i;
    }

    printf("Soma: %d\nQuantidade: %d\nMedia: %.2f\nMaior: %d\nMenor: %d\nMedia dos pares: %.2f\n", sum, i, avg, high, low, even_avg);

    return 0;
}