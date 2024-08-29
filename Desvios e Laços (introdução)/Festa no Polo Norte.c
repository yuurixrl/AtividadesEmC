#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int maior = 0;
    
    // Ler todos os números e encontrar o maior
    for (int i = 0; i < N; i++) {
        int Ai;
        scanf("%d", &Ai);
        if (Ai > maior) {
            maior = Ai;
        }
    }
    
    // O número do duende anfitrião será o próximo número inteiro maior que o maior número encontrado
    printf("%d\n", maior + 1);
    
    return 0;
}