#include<stdio.h>
int main(){

    int x;
    float y;
    scanf("%d %f",&x,&y);

    float ans = x/y;
    printf("%.3f km/l",ans);

    return 0;
}