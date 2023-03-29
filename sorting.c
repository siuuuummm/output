#include <stdio.h>
#include <stdlib.h>

void merge_binary_insertion_sort(void **base, size_t nitems, size_t k, int (*compar)(const void *, const void*)) {

}

static void binary_inserction_sort(void **base, int i, int j, int k, int (*compar) (const void *, const void *)) {

}

static void merge(void **base, int primo, int ultimo, int mezzo, int (*compar) (const void *, const void *)) {
    int i = primo;
    int j = mezzo + 1;
    int k = 0;

    void ** b = malloc(sizeof(void **) * (primo - ultimo) + 1);
    while(i <= mezzo && j <= ultimo) {
        if(compar(base[i], base[j])) {
            b[k] = base[i];
            i++;
        } else {
            b[k] = base[j];
            j++;
        }
        k++;
    }
    if(i <= mezzo) {
        while(base[i] <= base[mezzo]) {
            
        }
    }
}