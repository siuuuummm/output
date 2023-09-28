#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char v1[10] = {0};
    long v2[10] = {0};
    int i, j, len;
    len = sizeof(v1)/sizeof(v1[0]);
    for(i = 0; i < len; i++) {
        fgets(v1, len, stdin);
        v2[i] = strtol(v1, NULL, 10);
    }
    for(i = 0; i < len; i++) {
        for(j = 0; j < len; j++) {
            v1[i] += v2[j]; 
        }
    }
    for(i = 0; i < len; i++) {
        printf("%ld ", v2[i]);
    }
    printf("\n");
    return 0;
}