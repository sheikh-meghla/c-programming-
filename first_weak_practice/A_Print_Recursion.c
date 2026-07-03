#include<stdio.h>
int fun(int n){
    
    if(n==0)
        return 0;

    printf("I love Recursion\n",n);

    fun(n-1);
    
}
int main(){
    int n;
    scanf("%d",&n);
    fun(n);
}