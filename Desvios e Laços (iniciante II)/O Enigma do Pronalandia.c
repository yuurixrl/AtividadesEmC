#include <stdio.h>
#include <string.h>

int main() {
    char number[11]; //  até 10 dígitos + o nulo
    int len, i;
    scanf("%s", number);

    len = strlen(number);

    // Inversão 
    for (i = len - 1; i >= 0; i--) {
        printf("%c", number[i]);
    }

    printf("\n");

    return 0;
}