#include <stdio.h>

int main()
{
    double jair = 0, carlos = 0, neves = 0, nulo = 0, branco = 0, pct_nulos = 0, pct_brancos = 0, total = 0;
    int voto = 0;

    while (voto != 6)
    {
        printf("\n\nAs opcoes sao:\n1. Candidato Jair Rodrigues\n2. Candidato Carlos Luz\n3. Candidato Neves Rocha\n4. Nulo\n5. Branco\n\nEntre com o seu voto: ");
        scanf("%d", &voto);
        switch (voto)
        {
        case 1:
            jair++;
            total++;
            break;
        case 2:
            carlos++;
            total++;
            break;
        case 3:
            neves++;
            total++;
            break;
        case 4:
            nulo++;
            total++;
            break;
        case 5:
            branco++;
            total++;
            break;
        }
    }

    printf("\n\nResultados\n\nJair Rodrigues: %.0lf votos\nCarlos Luz: %.0lf votos\nNeves Rocha: %.0lf votos\n", jair, carlos, neves);

    if (total > 0)
    {
        pct_nulos = (nulo / total) * 100;
        pct_brancos = (branco / total) * 100;
    }
    printf("Nulos: %.2lf por cento dos votos\nBrancos: %.2lf por cento dos votos\n", pct_nulos, pct_brancos);

    if (jair > carlos && jair > neves)
    {
        printf("O vencedor eh Jair Rodrigues");
    }
    else if (carlos > jair && carlos > neves)
    {
        printf("O vencedor eh Carlos Luz");
    }
    else if (neves > jair && neves > carlos)
    {
        printf("O vencedor eh Neves Rocha");
    }
    else
    {
        printf("Houve empate");
    }
}