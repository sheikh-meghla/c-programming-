#include <stdio.h>

int main() {

    int total = 0;
    int interWin = 0;
    int gremioWin = 0;
    int draw = 0;

    while (1) {

        int inter, gremio;
        scanf("%d %d", &inter, &gremio);

        total++;

        if (inter > gremio) {
            interWin++;
        }
        else if (gremio > inter) {
            gremioWin++;
        }
        else {
            draw++;
        }

        while (1) {

            printf("Novo grenal (1-sim 2-nao)\n");

            int n;
            scanf("%d", &n);

            if (n == 1) {
                break;
            }

            if (n == 2) {

                printf("%d grenais\n", total);
                printf("Inter:%d\n", interWin);
                printf("Gremio:%d\n", gremioWin);
                printf("Empates:%d\n", draw);

                if (interWin > gremioWin) {
                    printf("Inter venceu mais\n");
                }
                else if (gremioWin > interWin) {
                    printf("Gremio venceu mais\n");
                }
                else {
                    printf("Nao houve vencedor\n");
                }

                return 0;
            }
        }
    }

    return 0;
}