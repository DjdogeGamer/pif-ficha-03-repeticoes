#include <stdio.h>
#include <string.h>

int main()
{
    char letters[3], try, discovered[3], is_valid = 1;
    int correct = 0, limit = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o %i caracter: \n", i + 1);
        scanf("%c%*c", &letters[i]);
    }

    do
    {
        printf("Informe um caracter: \n");
        scanf("%c%*c", &try);
        for (int i = 0; i < strlen(discovered); i++)
        {
            if (try == discovered[i])
            {
                is_valid = 0;
                printf("Opa! Essa letra já foi descoberta.\n");
            }
        }

        if (is_valid == 1)
        {
            for (int i = 0; i < 3; i++)
            {
                if (try == letters[i])
                {
                    discovered[correct] = letters[i];
                    ++correct;
                    printf("Acertou! Falta(m) %d letra(s)!\n", 3 - correct);
                }
            }
        }

        if (correct == 3)
        {
            printf("Parabéns! Você venceu!");
            break;
        }

        limit++;
        is_valid = 1;

        if (limit < 15)
        {
            printf("Tentativas restantes: %d\n", 15 - limit);
        }
        else
        {
            printf("Seu número de tentativas chegou ao fim :(");
        }

    } while (limit < 15);

    return 0;
}