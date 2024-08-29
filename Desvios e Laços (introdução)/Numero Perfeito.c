#include <stdio.h>
#include <math.h>

int eh_perfeito(int num) {
    if (num <= 1) {
        return 0;
    }
    
    int soma_divisores = 1;
    int limite = (int)sqrt(num);
    
    for (int i = 2; i <= limite; i++) {
        if (num % i == 0) {
            soma_divisores += i;
            if (i != num / i) {
                soma_divisores += num / i;
            }
        }
    }
    
    return soma_divisores == num;
}

int main() {
    int N;

    scanf("%d", &N);
    
    while (N--) {
        int X;

        scanf("%d", &X);
        
        if (eh_perfeito(X)) {
            printf("%d eh perfeito\n", X);
        } else {
            printf("%d nao eh perfeito\n", X);
        }
    }
    return 0;
}