#include<stdio.h>
int main(){

    long long sum = 0;
    int n;

    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    
    if (sum < 0)
    {
        sum = sum * -1;
    }
    printf("%lld\n",sum);
    

    return 0;
}