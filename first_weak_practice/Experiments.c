#include <stdio.h>

int main()
{
    int n, amount;
    char x;

    int rabbit = 0, rat = 0, frog = 0, total = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %c", &amount, &x);

        total += amount;

        if (x == 'C')
        {
            rabbit += amount;
        }
        else if (x == 'R')
        {
            rat += amount;
        }
        else if (x == 'S')
        {
            frog += amount;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbit);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", frog);

    printf("Percentual de coelhos: %.2lf %%\n", rabbit * 100.0 / total);
    printf("Percentual de ratos: %.2lf %%\n", rat * 100.0 / total);
    printf("Percentual de sapos: %.2lf %%\n", frog * 100.0 / total);

    return 0;
}