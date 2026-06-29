#include<stdio.h>
int main(){
    int a,b,c;
    char s,equel;
    scanf("%d %c %d %c %d",&a,&s,&b,&equel,&c);

    int ans;
    if (s == '+')
    {
        ans = a+b;
    }
    else if (s == '-')
    {
        ans = a-b;
    }
    else if (s == '*')
    {
        ans = a*b;
    }
    if (ans == c)
    {
        printf("Yes");
    }
    else{
        printf("%d\n",ans);
    }
    
}