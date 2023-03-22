#include <stdio.h>
#include <string.h>
#include "string_utilities.h"

int main() {
    char s1[100];
    char s2[100];
    int i;
    printf("Inserire la prima frase: ");
    fgets(s1, sizeof(s1), stdin);
    //printf("Inserire la seconda fase: ");
    //fgets(s2, sizeof(s2), stdin);
    for(i = 0; s1[i] != '\0'; i++) {
        if(s1[i] == '\n') {
            s1[i] = '\0';
        }
    }

    printf("Composizione: \n");
    printf("La stringa è lunga %d caratteri\n", slength(s1));
    printf("%p\n", scut_last_word(s1));
    printf("%d\n", string_is_empty(s1));
    printf("%d\n", string_is_palindrome(s1));
    //printf("%d\n", string_compare(s1, s2));
    string_wipe_whitespaces(s1);
    //printf("Ci sono %d occorrenze della lettera g\n", string_how_many('g', s1));
    return 0;
}
