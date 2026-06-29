#include<stdio.h>
int main(){

    int a;
    int b;
    scanf("%d %d",&a,&b);

    int tamp = a;

    a = b;
    b = tamp;

    printf("%d %d",a, b);
    return 0;
}