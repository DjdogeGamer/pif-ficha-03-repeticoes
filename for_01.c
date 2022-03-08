#include <stdio.h>
#define SIZE 5

int main()
{
    int num, div = SIZE, sum = 0;
    float avg = 0;

    for (int i = 0; i < SIZE; i++)
    {
        printf("Insira um numero: \n");
        scanf("%d", &num);

        if (num >= 0)
        {
            sum += num;
        }
        else
        {
            div--;
        }
    }

    if (div > 0)
    {
        avg = (float)sum / (float)div;
    }

    printf("Media dos numeros digitados: %.2f\n", avg);

    return 0;
}