#include <stdio.h>

int n;
long long a[1000];

long long sum(int i)
{
    if (i == n)
        return 0;

    return a[i] + sum(i + 1);
}

int main()
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    printf("%lld\n", sum(0));

    return 0;
}