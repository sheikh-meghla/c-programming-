#include<stdio.h>
int main(){

    int x, y;
    scanf("%d %d",&x,&y);
    int distance = x * y;
    float fuel_spent = distance/12.0;
    printf("%.3f\n",fuel_spent);

    return 0;
}
