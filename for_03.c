#include <stdio.h>

int main()
{
    int pop, sum_above_2 = 0, children;
    double wage, sum_wage = 0, sum_children = 0, high = 0, low = 0, pct_above_2 = 0;

    printf("Insira o número de habitantes: \n");
    scanf("%d", &pop);

    for (int i = 0; i < pop; i++)
    {
        printf("Insira o salário: \n");
        scanf("%lf", &wage);
        printf("Insira o número de filhos: \n");
        scanf("%d", &children);

        sum_wage += wage;
        sum_children += children;

        if (i == 0 || wage > high)
        {
            high = wage;
        }
        if (i == 0 || wage < low)
        {
            low = wage;
        }
        if (children > 2)
        {
            sum_above_2++;
        }
    }

    printf("Media salarial: R$%.2lf\nMedia filhos: %.1lf\n", sum_wage / pop, sum_children / pop);
    printf("Maior salario: R$%.2lf\nMenor salario: R$%.2lf\n", high, low);
    printf("Percentual com mais de dois filhos: %.2lf\n", ((float)sum_above_2 / pop) * 100);

    return 0;
}