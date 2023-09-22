#include <stdio.h>

int main(void) {
    char arr[60];
    int i;
    for(i = 0; i < 7; i++) {
        fgets(arr, sizeof(arr), stdin);
    }

    printf("%s \n", arr);
}