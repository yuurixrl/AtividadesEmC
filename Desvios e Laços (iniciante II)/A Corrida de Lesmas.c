#include <stdio.h>

int main() {
    int L, i, max_vel;

    // (EOF termina a execução) 
    while (scanf("%d", &L) != EOF) {
        max_vel = 0;

        // Loop 
        for (i = 0; i < L; i++) {
            int vel;
            scanf("%d", &vel);

            // Identifica a maior velocidade
            if (vel > max_vel) {
                max_vel = vel;
            }
        }

        // maior velocidade encontrada
        if (max_vel < 10) {
            printf("1\n");
        } else if (max_vel < 20) {
            printf("2\n");
        } else {
            printf("3\n");
        }
    }

    return 0;
}