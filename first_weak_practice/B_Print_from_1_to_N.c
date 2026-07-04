#include<stdio.h>
int fun(int n){
    
    if(n==0){
        
        return 0;

    }

    fun(n-1);
    printf("%d\n",n);
   
}
int main(){
    int n;
    scanf("%d",&n);
    fun(n);
}