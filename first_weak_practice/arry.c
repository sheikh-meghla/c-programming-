#include<stdio.h>
int main(){ 


    printf("Enter arry size:\n");
    int n;
    scanf("%d",&n);
    int a[n+1];

    printf("Enter the array values : \n")
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int idx,value;

    printf("Enter the index:\n");
    scanf("%d",&idx);

    printf("Enter the value:\n");
    scanf("%d",&value);


    for (int i = n; i > idx; i--)
    {
        a[i]=a[i-1];
    }
    a[idx]=value;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    
    return 0;
}