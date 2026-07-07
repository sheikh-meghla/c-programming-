#include <stdio.h>

int main()
{
    int x, y;
    float ans;

    scanf("%d %d", &x, &y);

    if (x == 1)
        ans = 4.00 * y;
    else if (x == 2)
        ans = 4.50 * y;
    else if (x == 3)
        ans = 5.00 * y;
    else if (x == 4)
        ans = 2.00 * y;
    else if (x == 5)
        ans = 1.50 * y;

    printf("Total: R$ %.2f\n", ans);

    return 0;
}