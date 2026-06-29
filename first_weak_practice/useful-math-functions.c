#include<stdio.h>
#include<math.h>

int main(){
    int ans = ceil(3.1);
    int ans1 = floor(3.1);
    int ans2 = round(3.5);
    int ans3 = sqrt(36);
    int ans4 = pow(4,3);
    int ans5 = abs(-2);

    printf("%d\n%d\n%d\n%d\n%d\n%d\n",ans,ans1,ans2,ans3,ans4,ans5);
    return 0;
}