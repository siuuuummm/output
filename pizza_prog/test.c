#include <stdio.h>
#include "libft.c"

int main(void) {                //ctrl + shift + frecce
    char str[1000] = {0};
    //char *str = NULL;
    char frase[1000] = {0};
    //char *frase = NULL;
    const char c = 'o';
    char * ret;
    int val;
    size_t value;
    printf("Inserire una stringa: ");
    fgets(str, sizeof(str), stdin);
    //ft_memset(str, 'C', 5);
    //printf("Risultato post-memeset: %s", str);
    //ft_bzero(str, 3);
    //printf("Risultato post-bzero: %s", str);
    //printf("Inserire seconda stringa: ");
    //fgets(frase, sizeof(frase), stdin);
    //ft_memcpy(str, frase, sizeof(frase));
    //printf("Risultato post-memcpy: %s", str);
    //fgets(frase, sizeof(frase), stdin);
    //ft_memccpy(str, frase, 'o', sizeof(frase));
    //printf("Risultato post-memccpy: %s", str);
    //ft_memmove(str, frase, 8);
    //printf("Risultato post-meemmove: %s", str);
    //ret = ft_memchr(str, c, sizeof(str));
    //printf("Risultato post-memchr: %s", ret);
    //val = ft_memcmp(str, frase, 10);
    //if(val > 0) {
    //    printf("str2 è minore di str1\n");
    //} else if(val < 0) {
    //    printf("str1 è minore di str2\n");
    //} else {
    //    printf("str1 è uguale a str2\n");
    //}
    //val = ft_strlen(str);
    //printf("Risultato post-strlen: %d\n", val);
    //value = ft_strlcpy(str, frase, sizeof(str));
    //printf("Risultato post-strlcpy: %s",str);
    //printf(" with length %ld\n", value);
    //value = ft_strlcat(str, frase, sizeof(str));
    //printf("Risultato post-strlcat: %s", str);
    //printf("with length %ld", value);
    //ret = ft_strchr(str, c);
    //printf("Risultato post-strchr: %s", ret);
    //ret = ft_strrchr(str, c);
    //printf("Risultato post-strrchr: %s", ret);
    //ret = ft_strnstr(str, frase, 15);
    //printf("Risultato post-strnstr: %s\n", ret);
    //val = ft_strncmp(str, frase, 4);
    //if (val == 0) {
    //    printf("Le stringhe sono uguali.\n");
    //} else if (val < 0) {
    //    printf("La prima stringa è minore della seconda.\n");
    //} else {
    //    printf("La prima stringa è maggiore della seconda.\n");
    //}
    val = ft_atoi(str);
    printf("Risultato post-atoi: %d\n", val);
}