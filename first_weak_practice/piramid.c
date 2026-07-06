#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int space = n-1;

    int star = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            printf("*");
        }

    printf("\n");
    space--;
    star += 2;

        
    }

    // printf("------------------------------------------\n");

    // int space1 = 0;

    // int star1 = 2;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < space1; j++)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 0; j < star1; j++)
    //     {
    //         printf("*");
    //     }

    // printf("\n");
    // space1 ++;
    // star1 -= 2;

        
    // }
    


    return 0;
}
