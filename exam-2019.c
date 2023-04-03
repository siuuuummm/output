#include <stdio.h>

int range_of_even(int * nums, int length, int *min, int *max);

int main() {
    int length = 10;
    int nums[length];
    int *min;
    int *max;
    int i;
    printf("Inserire numeri:\n");
    for(i = 0; i < length; i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d\n", range_of_even(nums, length, min, max));
}

int range_of_even(int * nums, int length, int *min, int *max) {
    int i;
    for(i = 0; i < length; i++) {
        if(nums[i] % 2 == 0) {
            if(&nums[i] > max) {
                max = &nums[i];
            } else if(&nums[i] < min) {
                min = &nums[i];
            } 
        }
    }
    if(max != 0) {
        return 1;
    } else {
        return 0;
    }

}