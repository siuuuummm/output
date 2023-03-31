#include <stdio.h>

int main() {
    double num;
    printf("Inserire un numero: ");
    scanf("%lf", &num);
    
    unsigned long *pointer = (unsigned long *)&num; //Ottieni l'indirizzo di memoria del double
    unsigned long mask = 0x7FF0000000000000; //Maschera per estrarre l'esponente
    unsigned long bit_estract = (*pointer & mask) >> 52; //Estrai gli 11 bit dell'esponente
    int exp = (int)bit_estract - 1023; //Rimuovi il bias e converti in decimale

    printf("L'esponente del numero %lf in IEEE 754-1985 è %d\n", num, exp);
    return 0;
}