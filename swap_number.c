#include<stdio.h>
int main(){
    int a = 11;
    int b = 22;
    printf("%d %d\n",a,b);
    int c = a;

     a = b;

     b = c;

    printf("%d %d\n",a,b);

}