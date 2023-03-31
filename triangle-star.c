#include <stdio.h>

int main() {
    int base, altezza, i, j, t;
    printf("Inserire base: ");
    scanf("%d", &base);
    printf("Inserire altezza: ");
    scanf("%d", &altezza);

    for(i = 1; i < altezza; i++) {
        t = base * i/ altezza;
        if(t) {
            for(j = 0; j < (t); j++) {
                printf("*");
            }
            printf("*");
        }
        printf("\n");
    }
}