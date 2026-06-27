#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    char a[n];

    scanf("%s",a);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int val = a[i]  - '0';

        sum = sum + val;
    }

    printf("%d\n",sum);
    

    return 0;
}