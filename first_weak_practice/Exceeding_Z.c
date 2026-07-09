#include<stdio.h>
int main(){

    int sum = 0;
    int count = 0;
    int targat_z;
    int x;
    scanf("%d",&x);
    while (1)
    {

    int z;
    scanf("%d",&z);
    
    if (z > x)
    {
       targat_z = z; 
       break;
    }

   }
   while (sum < targat_z)
   {
    sum = sum + x;
    count++;
    x++;
   }
   
   printf("%d\n",count);   
    
    return 0;
}