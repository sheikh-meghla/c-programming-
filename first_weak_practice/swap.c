#include<stdio.h>
int main(){

    int a = 10;
    int b = 20;

    int tamp = a;

    a = b;
    b = tamp;

    printf("a = %d \nb = %d \n",a, b);
    return 0;
}