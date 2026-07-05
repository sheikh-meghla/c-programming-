#include<stdio.h>

long long int fact(int n){
    if (n==1)
    {
        return 1;
    }
    long long mul = fact(n-1);
    return n*mul;
    
}
int main(){
    int n;
    scanf("%d",&n);
    long long ans = fact(n);
    printf("%lld\n",ans);
    return 0;
}