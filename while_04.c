#include <stdio.h>
int main()
{
    int choice = 0;

    while (choice != 3)
    {
        printf("\nBOAS VINDAS:\n1 - Imprimir Ola\n2 - Imprimir Bem Vindo\n3 - Sair do Algoritmo\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Ola!\n");
            break;
        case 2:
            printf("Bem vindo!\n");
            break;
        }
    }

    return 0;
}