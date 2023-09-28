#include <stdio.h>

int main(void) {
    char string[200] = {0};
    char freq[256] = {0};
    int i, len;
    len = sizeof(string)/sizeof(string[0]);
    fgets(string, len, stdin);

    for(i = 0; i < len; i++) {
            freq[(int)string[i]]++;
    }
    for(i = 32; i < 256; i++) {
        if(freq[i] != 0) {
            printf("%d,%c\n", freq[i], i);
        }
    }
    return 0;
}