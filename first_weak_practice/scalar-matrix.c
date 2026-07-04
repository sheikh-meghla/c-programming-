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

    int x = a[0][0];

    bool is_scaller = true;

    if (r==c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i==j)
                {
                   if(x != a[i][j]){
                        is_scaller = false;
                   }                  
                   
                }
                else if (a[i][j] != 0)
                {
                    is_scaller = false;
                    
                }                       
                
            }           
            
        } 
        
    }
   if (is_scaller == true)
   {
    printf("This is a scalar matrix");
   }
   else{
    printf("This is not a scalar matrix");
   }
           
    
}