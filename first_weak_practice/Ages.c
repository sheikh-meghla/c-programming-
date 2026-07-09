#include<stdio.h>
int main(){

    float avg;
    int count = 0;
    int sum = 0;
    while (1)
    {
        int n;
        scanf("%d",&n);

        if (n<0)
        {
            break;
        }
    
        if (n>0)
        {
            sum += n;
            count++;
        }
        
    }
    
    avg = (float) sum / count;
    printf("%.2f\n",avg);
    

    return 0;
}