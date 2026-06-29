#include<stdio.h>
#include<stdbool.h>

void distinct(int a[],int n)
{
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool is_unique = true;
        for (int j =i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                is_unique = false;
                break;
            }
            
        }
        if (is_unique == true)
        {
            count++;
        }
        
    }

    printf("%d",count);

    
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    distinct(a,n);
    return 0;
}