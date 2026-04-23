#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    long long somosti = (n * (n + 1) * (2 * n + 1)) / 6;
    printf("%lld",somosti);
    
    return 0;
}