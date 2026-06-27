#include<stdio.h>
int main(){
    int n,m;

    scanf("%d %d",&n,&m);

    int a[n+1];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&a[i]);
    }



    int freq[m+1];

    for (int i = 1; i <= m; i++)
    {
        freq[i] = 0;
    }


    

    for (int i = 1; i <= n; i++)
    {
        int val = a[i];
        freq[val]++;
    }

   


    for (int i = 1; i <= m; i++)
    {
        printf("%d\n",freq[i]);
    }
    
    
    
}