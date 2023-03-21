#include <stdio.h>
#include <string.h>
#define MAX_LINE_LENGTH 1024

int main() {
    char line[MAX_LINE_LENGTH];
    char *token;
    
    printf("Inserire una frase: ");
    // Legge una linea alla volta dallo standard input
    while (fgets(line, MAX_LINE_LENGTH, stdin)) {
        // Processa la linea per ottenere i conteggi
        token = strtok(line, " \n"); // Estrae la prima parola
        while (token != NULL) {
            printf("%ld ", strlen(token)); // Stampa la dimensione della parola
            token = strtok(NULL, " \n"); // Estrae la prossima parola
        }
        printf("\n"); // Termina la riga di output
    }
    
    return 0;
}
