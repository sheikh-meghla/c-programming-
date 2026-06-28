#include<stdio.h>
int main (){

    int t;
    scanf("%d",&t);

    while(t--) {
        
    int m1,d1,m2;

    scanf("%d %d %d",&m1,&m2,&d1);

    
    int d2 = (m1*d1) / (m1+m2);

    
    int d3 = d1 - d2;

    printf("%d\n",d3);

    }

    return 0;
}