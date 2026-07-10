#include <stdio.h>

int main()
{

    while (1)
    {

        int x;
        scanf("%d", &x);
        
        if (x==0)
        {
            break;
        }

        if (x%2!=0)
        {
            
            x = x+1;
            
        }

        int sum = 0;

        for (int i = 1; i <= 5; i++)
        {
                sum += x;
                x+=2;
            
        }

        printf("%d\n", sum);
    }

    return 0;
}