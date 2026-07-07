#include <stdio.h>

int main()
{
    int h1, m1, h2, m2;
    int start, end, duration;
    int hour, minute;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    start = h1 * 60 + m1;
    end = h2 * 60 + m2;

    if (start == end)
        duration = 24 * 60;
    else if (end > start)
        duration = end - start;
    else
        duration = (24 * 60 - start) + end;

    hour = duration / 60;
    minute = duration % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);

    return 0;
}