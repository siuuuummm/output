#include <stdio.h>
#include "libft.h"

void *ft_memset(void *str, int c, size_t n) {
    unsigned char *p = str;
    while(n > 0) {
        *p = c;
        p++;
        n--;
    }
    return str;
}

void ft_bzero(void *s, size_t n) {
    unsigned char *p = s;
    while(n > 0) {
        *p = 48;
        p++;
        n--;
    }
    return;
}

void *ft_memcpy(void *dest, const void * src, size_t n) {
    unsigned char *p = dest;
    unsigned const char *r = src;
    while(n > 0) {
        *p = *r;
        p++;
        r++;
        n--;
    }
    return dest;
}

void *ft_memccpy(void *dest, const void * src, int c, size_t n) {
    unsigned char *p = dest;
    unsigned const char *r = src;
    while(n > 0 && *r != c) {
        *p = *r;
        p++;
        r++;
        n--;
    }
    return dest;
}