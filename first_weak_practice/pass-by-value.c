#include<stdio.h>

void fun(int x){
    x = 10;
    printf("Fun function er x er address: %p\n",&x);


}
int main(){
    int x = 20;
    fun(x);
    printf("Main function er x er address: %p\n",&x);

    return 0;

}