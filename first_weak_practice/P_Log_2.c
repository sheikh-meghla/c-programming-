#include<stdio.h>

long long int log_2(long long int n){
    int count = 0;
    if (n==0)
    {
        return 0;
    }


    if (n/2)
    {
        count++;
    }

    int r = log_2(n/2);
    
    
    return count + r;    
}

int main(){
    long long int n;
    scanf("%lld",&n);

    long long int r = log_2(n);

    printf("%lld\n",r);
    
}