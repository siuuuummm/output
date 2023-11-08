#include <stdio.h>
#include "libft.c"

int main(void) {
    char str[1000] = {0};
    char frase[1000] = {0};
    printf("Inserire una stringa: ");
    fgets(str, sizeof(str), stdin);
    ft_memset(str, 'C', 5);
    printf("Risultato post-memeset: %s", str);
    ft_bzero(str, 3);
    printf("Risultato post-bzero: %s", str);
    fgets(frase, sizeof(frase), stdin);
    ft_memcpy(str, frase, sizeof(frase));
    printf("Risultato post-memcpy: %s", str);
    fgets(frase, sizeof(frase), stdin);
    ft_memccpy(str, frase, 'o', sizeof(frase));
    printf("Risultato post-memccpy: %s", str);
}