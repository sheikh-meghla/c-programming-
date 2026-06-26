#include<stdio.h>
int main(){
    char s[40];

    fgets(s,11,stdin);
    // gets(s);
    
    printf("%s",s);

    return 0;
}