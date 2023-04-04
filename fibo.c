#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int * fibo(int n);

int main() {
    int n, i, *v;
    printf("Inserire un numero: ");
    scanf("%i", &n);
    v = fibo(n);
    for(i = 0; i < n; i++) {
        printf("%d\n", v[i]);
    }
    free(v);
}

int * fibo(int n) {
    int *v, i;
    if(n <= 0) {
        return NULL;
    }
    v = malloc(sizeof(*v)*n);
    v[0] = 0;
    if(n == 1) {
        return v;
    }
    v[1] = 1;
    for(i = 2; i < n; i++) {
        v[i] = v[i - 1] + v[i - 2];
    }
    return v;
}