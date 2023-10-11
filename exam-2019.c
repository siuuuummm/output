#include <stdio.h>
#include <stdlib.h>
#define INT_MIN 0
#define INT_MAX 1000


int range_of_even(int * nums, int length, int *min, int *max);

int main(void) {
    int nums[10] = {0};
    int i, length = 10;
    int min_value = INT_MAX, max_value = INT_MIN;
    for(i = 0; i < length; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Risultato: %d\n", range_of_even(nums, length, &min_value, &max_value));
}

int range_of_even(int * nums, int length, int *min, int *max) {
    int i;
    if() {
        for(i = 0; i < length; i++) {
            if(*(nums + i) % 2 == 0) {
                if(*min >  *(nums + i)) {
                    *min = *(nums + i);
                } else if(*max < *(nums + i)) {
                    *max = *(nums + i);
                }
            }
        }
        return 1 && *min && *max;
    } else {
        return 0;
    }
}