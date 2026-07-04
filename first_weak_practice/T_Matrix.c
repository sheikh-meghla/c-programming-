#include<stdio.h>
#include<stdbool.h>
#include <stdlib.h>

int main(){
    int r,c,n;
    scanf("%d",&n);
    r = n;
    c = n;
    int primary_sum = 0;
    int secondary_sum = 0;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }        
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j )
            {
                primary_sum += a[i][j];
            }
                                           
        }           
            
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i + j == r-1 )
            {
                secondary_sum += a[i][j];   
            }
                            
                
        }           
            
    }
    
    int difference = primary_sum - secondary_sum;

    printf("%d",abs(difference));
        
    
    
}