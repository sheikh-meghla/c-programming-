#include<stdio.h>

void fun(int* p){
    *p = 10;


}
int main(){
    int x = 20;
    fun(&x);
    printf("%d\n",x);

    return 0;

}