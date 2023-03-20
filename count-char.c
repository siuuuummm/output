#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char s[100];
    char v[26] = 
    int i, j, count = 0;

    printf("Inserire una frase:\n");
    fgets(s, sizeof(s), stdin);

    for(i = 0; i < strlen(s); i++) {
        for(j = 0; s[i] >= 'a' && s[i] <= 'z'; j++)
        count += s[i];
    }

    printf("occorrenze: %d della lettera %s",count , s);
    return 0;
}