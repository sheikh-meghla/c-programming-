#include<stdio.h>
#include<stdbool.h>
int main(){

    int n;

    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int searching_val;

    scanf("%d",&searching_val);

    bool ami_ki_paisi = false;

    for (int i = 0; i < n; i++)
    {

        if (a[i] == searching_val) {
            ami_ki_paisi = true;
            break;
        }
       
    
        
    }


    if(ami_ki_paisi) {
        printf("paisi");
    }else{
        printf("painai");
    }
}