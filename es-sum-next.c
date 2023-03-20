#include <stdio.h>
#include <stdlib.h>

int main() {

    char s[10];
    int v1[10], v2[10], i, len;

    len = sizeof(v1)/sizeof(v1[0]); // nei FOR non utilizzare i sizeof(), risultati sballati o non dati
    printf("Inserire 10 numeri: \n");
    for(i = 0; i < len; i++) {
        fgets(s, sizeof(s), stdin);
        v1[i] = strtol(s, NULL, 10);
    }
    for(i = len - 1, v2[i] = v1[i], i--; i >= 0; i--) {
        v2[i] = v2[i + 1] + v1[i];
    }
    
    for(i = 0; i < len; i++){
        printf("Risultato: %d\n", v2[i]);
    }
    return 0;
}