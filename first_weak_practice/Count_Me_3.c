#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[10001];
        scanf("%s", s);

        int count1 = 0;
        int count2 = 0;
        int count3 = 0;

        int len = strlen(s);

        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                count1++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                count2++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                count3++;
            }
        }

        printf("%d %d %d\n", count2, count1, count3);
    }

    return 0;
}