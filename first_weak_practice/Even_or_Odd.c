#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] == 0)
        {
            printf("NULL\n");
        }
        else if (a[i] > 0 && a[i] % 2 == 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (a[i] < 0 && a[i] % 2 == 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (a[i] > 0 && a[i] % 2 != 0)
        {
            printf("ODD POSITIVE\n");
        }
        else
        {
            printf("ODD NEGATIVE\n");
        }
    }

    return 0;
}