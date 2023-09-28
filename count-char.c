#include <stdio.h>

int main(void) {
    char string[60] = {0};
    int i, len, count = 0;
    len = sizeof(string)/sizeof(string[0]);
    fgets(string, len, stdin);

    for(i = 0; i < len; i++) {
        if(string[i] != '\0') {
            printf("%d, %d\n", count, string[i]);
        }
    }
    return 0;
}