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
        *p = '\0';
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
    if(str != NULL) {
        const char *p = str;
        while(*p != 0) {
            p++;
        }
        return p - str - 1;
    } else {
        return NULL;
    }
}

size_t ft_strlcpy(char * restrict dest, const char * restrict src, size_t n) {
    if(dest != NULL) {
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
    } else {
        return NULL;
    }
}

size_t ft_strlcat(char *dest, const char *src, size_t n) {
    if(dest != NULL) {
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
    } else {
        return NULL;
    }
}

char *ft_strchr(const char *str, int c) {
    if(str != NULL) {
        char *p = str;
        while(*p != '\0') {
            if(*p == c) {
                return p;
            }
            *p = 0;
            p++;
        }
    } else {
        return NULL;
    }
}

char *ft_strrchr(const char *str, int c) {
    if (str == NULL) return NULL;

    char *p = str;
    char *occ = NULL;

    while(*p != '\0') { 
        if (*p == c) {
            occ = p;
        }
        p++;
    }

    return occ;
}

char *ft_strnstr(const char *haystack, const char *needle, size_t n) {
    if(haystack == NULL) return NULL;

    char *p = haystack;
    const char *r = needle;
    char *occ = NULL;

    while (*p != '\0' && n > 0) {
        *p = 0;
        p++;                                //bisogna rifarlo, non worka bene
        n--;
        if(*p == *r && *p != '\n') {
            occ = p;
            while(*p == *r) {
                if(*r == '\0') {
                    return occ;
                }
                p++;
                r++;
            }
        }
    }
    return occ;
}

int ft_strncmp(const char *str1, const char *str2, size_t n) {
    if(str1 == NULL && str2 == NULL) return 0;
    int val;
    while(n > 0) {
        if(*str1 > *str2) {
            return 1;
        } else if(*str1 == *str2) {
            val = 0;
        } else {
            return -1;
        }
        str1++;
        str2++;
        n--;
    }
    return val;
}

int ft_atoi(const char *str) {
    if(str == NULL) return 0;
    char *p = str;
    int val = 0;
    while(*p >= '0' && *p <= '9') {
        val *= 10;
        val += *p - 48;
        p++;
    }
    return val;
}

int ft_isalpha(int c) {
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        return 1;
    } else {
        return 0;
    }
}

int ft_isdigit(int c) {
    if(c >= 48 && c <= 57) {
        return 1;
    } else {
        return 0;
    }
}

int ft_isalnum(int c) {
    if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        return 1;
    } else {
        return 0;
    }
}

int ft_isascii(int c) {
    if(c >= 0 && c <= 127) {
        return 1;
    } else {
        return 0;
    }
}

int ft_isprint(int c) {
    if(c >= 32 && c <= 126) {
        return 1;
    } else {
        return 0;
    }
}

int ft_toupper(int c) {
    while(c >= 97 && c <= 122) {
        c -= 32;
    }
    return c;
}

int ft_tolower(int c) {
    while(c >= 65 && c <= 90) {
        c += 32;
    }
    return c;
}