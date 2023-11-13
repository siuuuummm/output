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

void *ft_memmove(void *str1, const void * str2, size_t n) {
    unsigned char *p = str1;
    unsigned const char *r = str2;
    while(n > 0) {
        *p = *r;
        p++;
        r++;
        n--;
    }
    return str1;
}

void *ft_memchr(const void *str, int c, size_t n) {
    unsigned char *p = str;
    while(n > 0) {
        if(*p != c) {
            *p = 0;
            p++;
        } else {
            str = &str[1000 - n];
            return str;
        }
        n--;
    }
}

int ft_memcmp(const void *str1, const void *str2, size_t n) {
    unsigned const char *p = str1;
    unsigned const char *r = str2;
    int value = 0;
    while(n > 0) {
        if(*p == *r) {
            p++;
            r++;
        } else if(*p > *r) {
            value = 1;
            return value;
        } else {
            value = -1;
            return value;
        }
        n--;
    }
    return value;
}

size_t ft_strlen(const char *str) {
    const char *p = str;
    int count = 0;
    while(*p != 0) {
        count++;
        p++;
    }
    return count - 1;
}

size_t ft_strlcpy(char * restrict dest, const char * restrict src, size_t n) {
    char *p = dest;
    const char *r = src;
    int count = 0;
    while(n > 0) {
        if(*r != 0 && *r != '\n') {
            *p = *r;
            p++;
            r++;
            count++;
        } else if(*p != 0) {
            p++;
        }
        n--;
    }
    return count;
}

size_t ft_strlcat(char *dest, const char *src, size_t n) {
    char *p = dest;
    const char *r = src;
    int count = 0;
    while(n > 0) {
        if(*p != 0 && *p != '\n') {
            p++;
            count++;
        }
        if((*p == 0 || *p == '\n') && *r != 0) {
            *p = *r;
            p++;
            r++;
            count++;
        }
        n--;
    }
    return count;
}