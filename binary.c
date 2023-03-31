#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main() {
    int num, r, i;
    int arr[INT_SIZE];
    printf("Inserire un numero: ");
    scanf("%d", &num);

    r = INT_SIZE - 1;

    while(r >= 0) {
        arr[r] = num & 1;
        r--;
        num >>=1;
    }
    printf("In binario: ");
    for(i = 0; i < INT_SIZE; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}