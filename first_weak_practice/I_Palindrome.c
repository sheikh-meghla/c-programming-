#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main()
{
    char s[1000];

    scanf("%s", s);

    int n = strlen(s);

    bool is_palindrome = true;

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            is_palindrome = false;
            break;
        }

        i++;
        j--;
    }

    if (is_palindrome)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}