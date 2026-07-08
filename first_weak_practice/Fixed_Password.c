#include<stdio.h>
int main(){

    while (1)
    {

    int x, y = 2002;
    scanf("%d",&x);
    if (x == y)
    {
        printf("Acesso Permitido\n");
        break;
    }
    else if (x != y)
    {
        printf("Senha Invalida\n");
    }
    
}
    

    return 0;
}