#include <stdio.h>

void *ft_memset(void *str, int c, size_t n);

void ft_bzero(void *s, size_t n);

void *ft_memcpy(void *dest, const void * src, size_t n);

void *ft_memccpy(void *dest, const void * src, int c, size_t n);

void *ft_memmove(void *str1, const void * str2, size_t n);

void *ft_memchr(const void *str, int c, size_t n);

int ft_memcmp(const void *str1, const void *str2, size_t n);

size_t ft_strlen(const char *str);

size_t ft_strlcpy(char * restrict dest, const char * restrict src, size_t n);

size_t ft_strlcat(char *dest, const char *src, size_t n);

char *ft_strchr(const char *str, int c);

char *ft_strrchr(const char *str, int c);