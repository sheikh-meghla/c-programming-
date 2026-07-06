#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char P1_f_name[10000],P1_l_name[100000];

    scanf("%s %s",&P1_f_name,&P1_l_name);

    char P2_f_name[100000],P2_l_name[100000];
    scanf("%s %s",&P2_f_name,&P2_l_name);

    int len_P1 = strlen(P1_l_name);
    int len_P2 = strlen(P2_l_name);
        bool x = true;

    if(len_P1 != len_P2){
        x = false;
    }
    
    for (int i = 0; i < len_P2; i++)
    {
        if(P1_l_name[i] != P2_l_name[i]){
            x = false;
            break;
        }
    }
    if (x == true)
    {
        printf("ARE Brothers");
    }
    else{
        printf("NOT");
    }
    
    
    return 0;
}