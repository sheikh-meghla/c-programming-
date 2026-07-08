#include <stdio.h>

int main()
{
    int a[100];
    int highest, position;

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &a[i]);

        if (i == 0)
        {
            highest = a[i];
            position = 1;
        }
        else if (a[i] > highest)
        {
            highest = a[i];
            position = i + 1;
        }
    }

    printf("%d\n", highest);
    printf("%d\n", position);

    return 0;
}