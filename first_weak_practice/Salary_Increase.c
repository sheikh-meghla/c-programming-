#include<stdio.h>
int main(){
    float novo = 0;
    float reajuste = 0;
    float percentual = 0; 
    float n;
    scanf("%f",&n);
    if (0<= n && n <=400.00)
    {
        novo = (15*n/100)+n;
        reajuste = novo - n;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %\n",novo,reajuste);
        
    }
    else if (400.00 < n && n <=800.00)
    {
        novo = (12*n/100)+n;
        reajuste = novo - n;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %\n",novo,reajuste);
        
    }
    else if (800.00< n && n <=1200.00)
    {
        novo = (10*n/100)+n;
        reajuste = novo - n;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %\n",novo,reajuste);
        
    }
    else if (n > 1200.00 && n <=2000.00)
    {
        novo = (7*n/100)+n;

        reajuste = novo - n;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %\n",novo,reajuste);
        
    }
    else if (n>2000.00)
    {
        novo = (4*n/100)+n;
        reajuste = novo - n;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %\n",novo,reajuste);
        
    }
    

    return 0;
}