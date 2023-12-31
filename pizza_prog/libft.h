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

char *ft_strnstr(const char *haystack, const char *needle, size_t n);

int ft_strncmp(const char *s1, const char *s2, size_t n);

int ft_atoi(const char *str);

int ft_isalpha(int c);

int ft_isdigit(int c);

int ft_isalnum(int c);

int ft_isascii(int c);

int ft_isprint(int c);

int ft_toupper(int c);

int ft_tolower(int c);