#include <stdio.h>

int main()
{
    int k, j;

    for (k = 0; k <= 10; k++)
    {
        float i = k * 0.2;

        for (j = 1; j <= 3; j++)
        {
            if (k == 0 || k == 5 || k == 10)
                printf("I=%.0f J=%.0f\n", i, i + j);
            else
                printf("I=%.1f J=%.1f\n", i, i + j);
        }
    }

    return 0;
}