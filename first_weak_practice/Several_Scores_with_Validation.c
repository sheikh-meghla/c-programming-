#include<stdio.h>
int main(){

    int count = 0;
    float average = 0;
    float sum = 0;

    while (1)
    {
        float n;
        scanf("%f",&n);
        if (n >= 0 && n <= 10)
        {
            sum += n;
            count++;
        }
        else
        {
            printf("nota invalida\n");
        }
        if (count == 2)
        {
            break;
        }
        
        
    }
    average = sum / 2.0;
    printf("media = %.2f\n",average);

    return 0;
}