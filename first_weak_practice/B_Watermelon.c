#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    bool x = false;
    for (int i = 0;i < 100; i++)
    {
       if (n>2)
       {
        if (n%2 == 0)
       {
        x = true;
       }
        
       }
    
       
       
    }
    if (x == true)
       {
        printf("YES");
       }
       else{
        printf("NO");
        
       }
    return 0;
}