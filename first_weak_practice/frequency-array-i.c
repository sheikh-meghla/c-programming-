#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int fre[5]={0};
    
    for (int i = 0; i < n; i++)
    {
        if (a[i]==0)
        {
            fre[0]++;
        }
        else if (a[i]==1)
        {
            fre[1]++;
        }
        else if (a[i]==2)
        {
            fre[2]++;
        }
        else if (a[i]==3)
        {
            fre[3]++;
        }
        else if (a[i]==4)
        {
            fre[4]++;
        }
        
    }
    printf("%d %d %d %d %d \n",fre[0],fre[1],fre[2],fre[3],fre[4]);
    

    return 0;
}