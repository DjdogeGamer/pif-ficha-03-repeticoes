#include <stdio.h>

int main()
{
    int pop, i = 0, code, first = 0;
    float type_r = 0, type_c = 0, type_i = 0, lowest = 0, highest = 0, spent;

    printf("Informe o numero de habitantes: \n");
    scanf("%d", &pop);
    do
    {
        printf("Consumo: \n");
        scanf("%f", &spent);
        printf("Codigo: \n");
        scanf("%d", &code);
        switch (code)
        {
        case 1:
            type_r += spent;
            break;
        case 2:
            type_c += spent;
            break;
        case 3:
            type_i += spent;
            break;
        }

        if (lowest > spent || first == 0)
        {
            lowest = spent;
        }
        if (highest < spent || first == 0)
        {
            highest = spent;
        }
        i++;
        first = 1;
    } while (i < pop);

    if (pop > 0)
    {
        printf("Maior: %f\nMenor: %f\n", highest, lowest);
        printf("Media: %f\nResidencial: %f\nComercial: %f\nIndustrial: %f", (type_c + type_r + type_i) / pop, type_r, type_c, type_i);
    }

    return 0;
}