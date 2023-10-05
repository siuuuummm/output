#include <stdio.h>

int main(void) {
    int n, i, count = 0;
    printf("Inserire un numero: ");
    scanf("%d", &n);

    printf("Risultato: ");
    for(i = 0; n != 1; i++) {
        if(n % 2 == 0) {
            n = n/2;
            count++;
        } else {
            n = (n * 3) + 1;
            count++;
        }
        printf("%d ", n);
    }
    printf("\n");
    printf("Lunghezza sequenza: %d", count);
    printf("\n");
}