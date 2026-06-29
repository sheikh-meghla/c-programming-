#include<stdio.h>
int main(){
    int x = 11;
    printf("%d\n",x);
    printf("%p\n",x);

    int *ptr;
    ptr = &x;
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    return 0;
    
}