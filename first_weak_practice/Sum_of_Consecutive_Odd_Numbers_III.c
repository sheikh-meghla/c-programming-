#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x%2==0)
        {
            
            x = x+1;
            
        }

        int sum = 0;

        for (int i = 1; i <= y; i++)
        {
                sum += x;
                x+=2;           
        }

        printf("%d\n", sum);
    }

    return 0;
}