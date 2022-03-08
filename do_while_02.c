#include <stdio.h>

int main()
{
    int num, fact = 1, i = 1;

    printf("Informe o numero: ");
    scanf("%d", &num);

    do
    {
        fact *= i;
        i++;
    } while (i <= num);

    printf("\nFatorial: %d\n", fact);

    return 0;
}