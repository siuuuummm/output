#include <stdio.h>

int main() {
    char s[100];
    int i = 0, count = 0;
    printf("Inserire una frase: ");
    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0') {
        if(s[i] != ' ') {
            count++;
            i++;
        } else {
            s[i] = count;
            printf("%d\n", count);
            count = 0;
            i++;
        }
    }
    printf("Dimensioni parole: %d\n", s[i]);
}