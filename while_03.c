#include <stdio.h>
int main()
{
    int password = 4242, try, limit = 3;

    while (limit != 0)
    {
        printf("\nSenha: ");
        scanf("%d", &try);

        if (try == password)
        {
            printf("\nSenha correta");
            break;
        }
        else if (limit > 1)
        {
            printf("\nSenha incorreta. Voce possui mais %d tentativa(s).", --limit);
        }
        else
        {
            printf("\nAcesso bloqueado.\n");
            break;
        }
    }

    return 0;
}