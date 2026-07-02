#include<stdio.h>
int main(){

    int x,y;
    scanf("%d %d",&x,&y);
    int sum = x + y;
    int sub = x - y;

    float a, b;
    scanf("%f %f",&a,&b);
    float sum1 = a + b;
    float sub1 = a - b;

    printf("%d %d\n",sum,sub);
    printf("%.1f %.1f\n",sum1,sub1);

    return 0;
}