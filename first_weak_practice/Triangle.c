#include<stdio.h>
int main(){

    float a, b, c;
    scanf("%f %f %f",&a,&b,&c);

    if (a+b>c && a+c>b && b+c>a)
    {
        float ans1 = a+b+c;
        printf("Perimetro = %.1f\n",ans1);
    }
    else
    {
        float ans = (a+b)*c/2;
        printf("Area = %.1f\n",ans);
    }
    
    

    return 0;
}