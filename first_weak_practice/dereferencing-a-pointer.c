#include<stdio.h>


int main(){
    int x = 15;
    printf("%p\n",&x);

    int *ptr;
    ptr = &x;
    *ptr = 10;
    printf("%d\n",x);
    


    return 0;
    
}