#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <time.h>

int main(int argc, char *argv[]) {
    srand(time(NULL));
    int random, i;
    alarm(atoi(argv[2]));
    if(argc != 3) {
        fprintf(stderr, "Errore nell'inserimento dati. Riprovare");
        return -1;
    }
    random = rand() % atoi(argv[1]); //minimo modulo 2 per restituire 0 o 1
    while (SIGALRM) {
        printf("Inserire un numero: ");
        scanf("%d", &i);
        if(i == random) {
            printf("Numero indovinato!!!\n");
            exit(EXIT_SUCCESS);
        } else {
            if(i > random) {
                printf("Numero maggiore di quello estratto casualmente. Riprovare\n");
            } else {
                printf("Numero minore di quello estratto casualmente. Riprovare\n");   
            }
        }
    }
}