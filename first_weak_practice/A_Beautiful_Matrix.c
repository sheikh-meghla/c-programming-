#include<stdio.h>
#include <stdlib.h>

int main(){

    int a[6][6];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d",&a[i][j]);
            
        }
        
    }

    int x,y;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (a[i][j] == 1)
            {
                
                x = i;
                y = j;

            }
            
        }
        
    }

    int output = abs(x-3)+abs(y-3);
    printf("%d",output);
    

}