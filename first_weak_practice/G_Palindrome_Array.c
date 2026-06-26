#include <stdio.h>
#include<stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[n];

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    bool is_palindrome = true;

    // logic

    int i = 0;
    int j = n - 1;

    while (i<j)
    {
        if (a[i]!= a[j])
        {
            is_palindrome = false;
        }
        i++;
        j--;
        
    }
      
    if (is_palindrome == true)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}