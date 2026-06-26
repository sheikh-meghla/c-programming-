#include<stdio.h>
#include<string.h>
int main(){
    char S[1001];
    char T[1001];

    scanf("%s %s",&S,&T);

    int counter_one = 0;
    int counter_two = 0;
    for (int i = 0; S[i] != '\0'; i++)
    {
        counter_one++;
    }
    for (int i = 0; T[i] != '\0'; i++)
    {
        counter_two++;
    }

    printf("%d %d\n",counter_one,counter_two);

    printf("%s %s",S,T);

    return 0;
}