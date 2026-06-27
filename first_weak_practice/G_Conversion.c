#include<stdio.h>
#include<string.h>
int main(){

    char s[100001];

    scanf("%s",&s);

    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] <= 'Z' && s[i]>= 'A')
        {
            s[i] = s[i] + ' ';
        }
        else if (s[i] <= 'z' && s[i] >= 'a')
        {

            s[i] = s[i] - ' ';


        }else if (s[i]=',')
        {
            s[i] = ' ';
        }
        
        
       
        
    }
    
    printf("%s",s);
    
  
    
    




    return 0;
}