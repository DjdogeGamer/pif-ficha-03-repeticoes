#include <stdio.h>
#define PUBLIC 10

int main()
{
    float avg_age_ex = 0, bom_pct = 0;
    int ex_qt = 0, reg_qt = 0, bom_qt = 0, age, age_ex = 0, op;

    for (int i = 0; i < PUBLIC; i++)
    {
        printf("Insira a sua idade: \n");
        scanf("%d", &age);
        printf("Insira a opiniao: \n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            reg_qt++;
            break;
        case 2:
            bom_qt++;
            break;
        case 3:
            age_ex += age;
            ex_qt++;
            break;
        }
    }

    if (ex_qt > 0)
    {
        avg_age_ex = (float)age_ex / (float)ex_qt;
    }

    if (bom_qt > 0)
    {
        bom_pct = ((float)bom_qt / (float)PUBLIC) * 100;
    }

    printf("Media das idades dos que responderam excelente: %.2f\nQuantos responderam regular: %d\nPercentagem de bom: %.2f por cento\n", avg_age_ex, reg_qt, bom_pct);

    return 0;
}