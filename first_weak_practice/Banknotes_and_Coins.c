#include <stdio.h>

int main()
{
    double n;
    scanf("%lf", &n);

    int cent = (int)(n * 100 + 0.5);

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", cent / 10000);
    cent %= 10000;

    printf("%d nota(s) de R$ 50.00\n", cent / 5000);
    cent %= 5000;

    printf("%d nota(s) de R$ 20.00\n", cent / 2000);
    cent %= 2000;

    printf("%d nota(s) de R$ 10.00\n", cent / 1000);
    cent %= 1000;

    printf("%d nota(s) de R$ 5.00\n", cent / 500);
    cent %= 500;

    printf("%d nota(s) de R$ 2.00\n", cent / 200);
    cent %= 200;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", cent / 100);
    cent %= 100;

    printf("%d moeda(s) de R$ 0.50\n", cent / 50);
    cent %= 50;

    printf("%d moeda(s) de R$ 0.25\n", cent / 25);
    cent %= 25;

    printf("%d moeda(s) de R$ 0.10\n", cent / 10);
    cent %= 10;

    printf("%d moeda(s) de R$ 0.05\n", cent / 5);
    cent %= 5;

    printf("%d moeda(s) de R$ 0.01\n", cent);

    return 0;
}