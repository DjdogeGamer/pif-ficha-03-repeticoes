#include <stdio.h>

int main()
{
    float sum_day = 0, sum_client = 0, price = 1;
    int operation;

    while (operation != 0)
    {
        printf("Aperte 0 para fechar o caixa ou 1 para prosseguir: ");
        scanf("%d", &operation);

        if (operation == 0)
        {
            break;
        }
        else
        {
            price = 0;
            sum_client = 0;
            do
            {
                printf("Insira o preco do item ou 0 caso nao haja mais itens: ");
                scanf("%f", &price);
                if (price != 0)
                {
                    sum_client += price;
                }
                else
                {
                    printf("O total da compra foi de R$%.2f\n\n", sum_client);
                    sum_day = sum_day + sum_client;
                }
            } while (price != 0);
        }
    }

    printf("O total arrecadado neste caixa foi de R$%.2f", sum_day);

    return 0;
}