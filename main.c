#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    int min = 0, max = 5, n, i = 0, caso, l=1, player = 0, cpu = 0,k=0;
    while (l == 1) {
        printf("gioco di sasso carta o forbice contro il pc inserisci: \n");
        printf("sasso = 0\ncarta = 2\nforbice = 5 \n");
        i = 0;
        while (i < 1) {
            srand(time(NULL));
            n = rand() % (min - max + 1) + min;
            if (n == 5 || n == 2 || n == 0) {
                i = 1;
            }
        }
        while (k<1) {
            scanf("%d", &caso);
            if (caso == 5 || caso == 2 || caso == 0) {
                k = 1;
            } else {
                printf("numero invalido riscrivi \n");
            }
        }
        printf("il pc ha scelto: %d \n", n);
        switch (caso) {
            case 0:
                // caso sasso
                    switch (n) {
                        case 0:
                            printf("avete pareggio");
                        break;
                        case 2:
                            printf("hai perso");
                        cpu++;
                        break;
                        case 3:
                            printf("hai vinto");
                        player++;
                        break;
                    }
            break;
            case 2:
                // caso carta
                    switch (n) {
                        case 0:
                            printf("hai vinto");
                        player++;
                        break;
                        case 2:
                            printf("avete pareggio");
                        break;
                        case 3:
                            printf("hai perso");
                        break;
                    }
            break;
            case 3:
                switch (n) {
                    // caso forbice
                    case 0:
                        printf("hai perso");
                    cpu++;
                    break;
                    case 2:
                        printf("hai vinto");
                    player++;
                    break;
                    case 3:
                        printf("avete pareggio");
                    break;
                }
            break;
        }
        k = 0;
        i = 0;
        printf("vuoi ri-giocare? (digitare 1 se si)\n");
        scanf("%d", &l);
    }
    if (player>cpu) {
        printf("va vinto di piu' la cpu per %d a %d", cpu,player);
    } else {
        printf("ha vinto di piu' il giocatere per %d a %d",player,cpu);
    }
}