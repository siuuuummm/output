#include <stdio.h>
#include <stdlib.h>

int main() {

    char v1[20];
    int v[7], i, len;

    len = sizeof(v)/sizeof(v[0]); /* lunghezza dell'array dalla sua grandezza*/
    printf("Enter %d numbers\n", len);
    for(i = 0; i < len; i++) {
        fgets(v1, sizeof(v1), stdin);
        v[i] = strtol(v1, NULL, 10);
        
    }
    printf("Stampa nell'ordine richiesto\n");
    for(i = 0; i < len; i += 2)
        printf("%d\n", v[i]);
    for(i = 1; i < len; i += 2)
        printf("%d\n", v[i]);
    return 0;
}

//11 20 37 45 51 69 75