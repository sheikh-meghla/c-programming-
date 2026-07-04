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



    int count = 0;


    while(true){

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
                if(a[i]%2 != 0) {
                    flag = false;
                }
               
        }


        if(flag == false){
           break;
        }

        for(int i = 0;i<n;i++){
            a[i] = a[i]/2;
        }

        count++;
            
        
    }

        printf("%d\n",count);



    
    }
  
    