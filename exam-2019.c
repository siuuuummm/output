#include <stdio.h>
#include <stdlib.h>

int range_of_even(int * nums, int length, int *min, int *max);

int main(void) {
    int nums[10] = {0};
    int i, length = 10;
    int *min, max;
    for(i = 0; i < length; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Risultato: %d\n", range_of_even(nums, length, NULL, NULL));
}

int range_of_even(int * nums, int length, int *min, int *max) {
    int i;
    for(i = 0; i < length; i++) {
        if(*(nums + i) % 2 == 0) {
            if(*min >  *(nums + i)) {
                *min = *(nums + i);
            } else if(*max < *(nums + i)) {
                *max = *(nums + i);
            }
        }
    }
    return *nums;
}