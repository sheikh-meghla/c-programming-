#include<stdio.h>
void recur(int n){
    if (n == 0)
    {
        return;
    }
    recur(n/10);
    int last = n%10;
    printf("%d ",last);
    
}

int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
    int n;
    scanf("%d",&n);
    if (n==0)
    {
        printf("0");
    }
    
    recur(n);

    printf("\n");
    }


    return 0;
}