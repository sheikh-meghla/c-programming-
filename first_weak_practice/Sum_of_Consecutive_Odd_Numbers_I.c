#include <stdio.h>

int main()
{
    int sum = 0;
    int x, y;

    scanf("%d %d", &x, &y);

    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = x + 1; i < y; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}