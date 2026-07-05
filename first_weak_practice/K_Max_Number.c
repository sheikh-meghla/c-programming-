#include <stdio.h>

int max_num(int a[], int n)
{
    if (n == 1)
    {
        return a[0];
    }
    int max = max_num(a, n - 1);

    if (a[n - 1] > max)
    {
        return a[n - 1];
    }

    return max;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int ans = max_num(a, n);

    printf("%d\n", ans);

    return 0;
}