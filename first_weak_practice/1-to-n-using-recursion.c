#include<stdio.h>

void hello(int i)
{
    if (i == 10)
    {
        return;
    }
    
    printf("%d\n",i);
    hello(i + 1);
}
int main(){
    int i = 1;
    hello(i);
    return 0;
    
    return 0;
}