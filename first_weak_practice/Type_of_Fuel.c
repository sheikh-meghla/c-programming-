#include<stdio.h>
int main(){

    int alcool = 0;
    int gasoline = 0;
    int diesel = 0;

    while (1)
    {
        
        float n;
        scanf("%f",&n);
        if (n == 4)
        {
            break;
        }
        if (n==1)
        {
            alcool++;
        }
        else if (n==2)
        {
            gasoline++;
        }
        else if (n == 3)
        {
            diesel++;
        }
 
        
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",gasoline);
    printf("Diesel: %d\n",diesel);

    return 0;
}