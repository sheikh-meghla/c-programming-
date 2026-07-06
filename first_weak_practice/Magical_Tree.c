#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int p = n / 2 + 6;
    int space = p - 1;
    int star = 1;

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            printf("*");
        }

        printf("\n");
        space--;
        star += 2;
    }

    int t = p - (n / 2) - 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < t; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}