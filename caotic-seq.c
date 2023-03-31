#include <stdio.h>

int main() {
    int n, i, j;
    printf("Inserire un numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        j = i;
        printf("-%d ", j);
        while (j > 1) {
            if(j % 2 == 0) {
                j = j / 2;
                printf("%d ", j);
            } else {
                j = (j * 3) + 1;
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}