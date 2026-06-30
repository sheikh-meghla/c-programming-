#include<stdio.h>

void input(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    int a[n];

    input(a, n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}