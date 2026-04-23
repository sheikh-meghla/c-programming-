#include<stdio.h>
#include<math.h>
int main(){

    int a;
    int b;
    scanf("%d %d",&a,&b);
    int c = a*a + b*b;
    float r = sqrt(c);
    
    printf("%f",r);

    return 0;
}