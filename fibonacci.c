#include <stdio.h>
int main()
{
    int x;
    int n1 = 0, n2 = 1;
    int new = n1 + n2;

    printf("Insira o valor da sequencia: ");
    scanf("%d", &x);

    printf("Fibonacci: %d %d ", n1, n2);

    for (int i = 3; i <= x + 1; i++)
    {
        printf("%d ", new);
        n1 = n2;
        n2 = new;
        new = n1 + n2;
    }

    return 0;
}