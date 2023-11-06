#include <stdio.h>
#include "libft.h"

void *ft_memset(void *str, int c, size_t n) {
    str = (int[10000000]){};
    for(int i = 0; n > 0; i++) {
        str[i] = c;
        n--;
    }
    return 0;
}