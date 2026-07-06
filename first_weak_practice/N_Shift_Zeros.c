#include<stdio.h>

void shift_zero(int n,int a[]){
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0)
        {
            printf("%d ",a[i]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]==0)
        {
            printf("%d ",a[i]);
        }
        
    }
    
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    shift_zero(n,a);
    
}