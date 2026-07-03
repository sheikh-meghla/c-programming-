#include<stdio.h>

void hello(int i)
{
    if (i == 0)
    {
        return;
    }
    if (i%2 == 0)
    {
        printf("%d\n",i);
    }  
    
    hello(i - 1);
}
int main(){
    int i = 6;
    hello(i);
    
    return 0;
}