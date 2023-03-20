#include <stdio.h>

/*int main() {
    int funz, count = 0;
    double media = 0;
    printf("Inserisci una lista di valori interi positivi non nulli:\n");
    while(funz != '\0') {
        scanf("%d",& funz);
        media += funz;
        count++;
    }
    media = media/(count - 1);
    printf("La media dei valori è: %f\n", media);

    return 0;
}*/

/*int main() {
    char funz;
    printf("Premere un tasto qualsiasi: \n");
    scanf("%s", & funz);
    if(funz >= 48 && funz <= 57) {
        printf("Il carattere che hai inserito è un numero.");
    } else {
        if(funz >= 65 && funz <= 90 || funz >= 97 && funz <= 122) {
            printf("Il carattere che hai inserito è una lettera dell'alfabeto.");
        } else {
            printf("Il carattere che hai inserito non è alfanumerico.");
        }
    }
}*/

int main() {
    int n, funz, count = 0;
    double media = 0;
    printf("Inserire un numero: \n");
    scanf("%d", & n);
    printf("Inserire i voti: \n");
    while(n > 0) {
        scanf("%d", & funz); // non inserire \n perché mi richiederebbe un
        media += funz;       // numero in più.
        count++;
        n--;
    }
    media = media/count;
    printf("La media è: %f", media);
}