#include <stdio.h>
#include <string.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    char S[25];
    scanf("%s", S);

    if (S[A] != '-')
    {
        printf("No\n");
        return 0;
    }

    for (int i = 0; i < strlen(S); i++)
    {
        if (i == A)
            continue;

        if (S[i] < '0' || S[i] > '9')
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");

    return 0;
}