#include<stdio.h>
int main(){

    int a;
    int b;
    scanf("%d %d",&a,&b);
    long long sum = a + b;
    if (sum <0)
    {
       sum = sum * -1;
    }
    printf("sum");
    

    return 0;
}