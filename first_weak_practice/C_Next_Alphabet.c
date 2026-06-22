#include<stdio.h>
int main(){
    char ch;

    scanf("%c",&ch);



    if (ch == 'z'){
        ch = 'a';
    }else{
        
    ch = (int)ch + 1;

    }



    printf("%c",ch);

  

}