#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char arr[7];
    int i, j, len;
    long ris[7];
    len = sizeof(arr)/sizeof(arr[0]);
    for(i = 0; i < len; i++) {
        fgets(arr, sizeof(arr), stdin);
        ris[i] = strtol(arr, NULL, 10);
    }
    for(i = 0; i < len; i = i + 2) {
        printf("%ld ",  ris[i]);
    }
    for(j = 1; j < len; j = j + 2) {
        printf("%ld ", ris[j]);
    }
    printf("\n");
    return 0;
}