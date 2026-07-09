#include<stdio.h>
int main(){

    int n1 = 0;
    int n2 = 1;

    int n;
    scanf("%d",&n);
    if (n==1)
    {
        printf("0\n");
        return 0;
    }
    
    printf("%d %d",n1,n2);
    n = n-2;

    while (n--)
    {
        int next_n = n1 + n2;
        n1 = n2;
        n2 = next_n;
        printf(" %d",next_n);
    }
    
    printf("\n");

    return 0;
}