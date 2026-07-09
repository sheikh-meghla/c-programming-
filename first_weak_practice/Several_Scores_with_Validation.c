#include<stdio.h>
int main(){


    while(1) {

        
    int count = 0;
    float average = 0;
    float sum = 0;
    
        while (count < 2)
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

        while(1) {

            printf("novo calculo (1-sim 2-nao)\n");

            int option;
            scanf("%d",&option);

                if(option == 1){
                    break;
                }

                if(option == 2){
                    return 0;
                }
        }


        

    }



    return 0;
}