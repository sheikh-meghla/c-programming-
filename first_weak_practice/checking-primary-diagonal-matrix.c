#include<stdio.h>
#include<stdbool.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    bool is_diagonal = true;
    if (r==c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    
                }
                else if (a[i][j] != 0)
                {
                    
                    is_diagonal = false;
                }                
                
            }           
            
        }        
        
    }


            if (is_diagonal == true)
            {
                printf("This is a primary diagonal matrix");
            }else{
                printf("This is a not primary diagonal matrix");
            }
    
}