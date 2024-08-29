#include <stdio.h>
 
int main() {
 
    int L, C;
    scanf("%d",&L);
    scanf("%d",&C);
    
    int total1 = (L * C) + ((L - 1) * (C - 1));
    int total2 = 2 * ((L - 1) + (C - 1)); 
    
    printf("%d\n", total1);
    printf("%d\n", total2);
 
    return 0;
}