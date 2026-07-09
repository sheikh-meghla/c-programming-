#include<stdio.h>
int main(){

    int fibonacci_num[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 32};

    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",fibonacci_num[i]);
    }
    
    return 0;
}