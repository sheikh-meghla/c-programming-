#include<stdio.h>
int main(){

    int a;
    int d;
    int n;
    scanf("%d %d %d",&a, &d, &n);
    int somosti = n/2 * (2*a + (n-1) *d);
    printf("%d",somosti);

    return 0;
}