#include <stdio.h>

//  verificar Fibonacci
int isFibonacci(int num) {
    int ant1 = 1, ant2 = 1, atual_num = 2;
    if (num == 1) return 1;
    while (atual_num <= num) {
        if (atual_num == num) return 1;
        ant1 = ant2;
        ant2 = atual_num;
        atual_num = ant1 + ant2;
    }
    return 0;
}

int main() {
    int index_num;
    scanf("%d", &index_num);

    int contador = 0, novo_num = 1;

    // K-ésimo Fibonot
    while (contador < index_num) {
        if (!isFibonacci(novo_num)) {
            contador++;
        }
        novo_num++;
    }

    // Imprimir o K-ésimo número Fibonot
    printf("%d\n", novo_num - 1);

    return 0;
}