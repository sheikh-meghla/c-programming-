#include<stdio.h>
int main(){

    int time;
    scanf("%d",&time);

    printf("%d:",time/3600);

    time = time%3600;
    printf("%d:",time/60);
    time = time%60;
    printf("%d\n",time%60);

    return 0;
}