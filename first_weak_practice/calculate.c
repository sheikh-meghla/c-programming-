#include<stdio.h>

void sum(int a, int b){
    int ans = a + b;
    printf("%d\n", ans);
}

void sub(int a, int b){
    int ans = a - b;
    printf("%d\n", ans);
}
void mul(int a, int b){
    int ans = a * b;
    printf("%d\n", ans);
}
void div(int a, int b){
    int ans = a / b;
    printf("%d\n", ans);
}
void rec(int a, int b){
    float ans = a * b/2;
    printf("%d\n", ans);
}

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    sum(a, b);
    rec(a, b);

    return 0;
}