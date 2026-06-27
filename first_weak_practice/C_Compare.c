// #include<stdio.h>
// #include<stdbool.h>
// int main(){

//     char X[101], Y[101];
//     scanf("%s %s",&X,&Y);

//     int i=0;

//     while (true)
//     {
//         if (X[i] == '\0' && Y[i] == '\0')
//         {
//             printf("%s\n",X);
//             break;
//         }
//         else if(X[i]== '\0')
//         {
//             printf("%s\n",X);
//             break;
//         }
//         else if (Y[i] == '\0')
//         {
//             printf("%s\n",Y);
//             break;
//         }
//         else if (X[i]<Y[i])
//         {
//             printf("%s\n",X);
//             break;
//         }
//         else if (X[i]>Y[i])
//         {
//             printf("%s\n",Y);
//             break;
//         }
//         else if (X[i]==Y[i])
//         {
//             i++;
//         }
        
        
        
//     }
    

//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){
    char X[101],Y[101];
    scanf("%s %s",&X,&Y);

    int val = strcmp(X,Y);

    if (val<0)
    {
        printf("%s\n",X);
    }

    if (val>0)
    {
        printf("%s\n",Y);
    }

    if (val==0)
    {
        printf("%s\n",X);
    }
    
}
