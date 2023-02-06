#include <stdio.h>

int *twoSum(const int *nums, size_t arrayLength, int target);
void printArray(const int *nums, size_t arrayLength);

int main(void) {

    int testArr1[4] = { 2, 7, 11, 15 };
    int testTarget1 = 9;

    int testArr2[3] = { 3, 2, 4 };
    int testTarget2 = 6;

    int testArr3[2] = { 3, 3 };
    int testTarget3 = 6;

    int *result1 = twoSum(testArr1, 4, testTarget1);

    printArray(result1, 2);

    return 0;
}

int *twoSum(const int *nums, size_t arrayLength, int target) {
    // initialise result
    int static result[2];

    // loop through the array up to the element before the last
    for (size_t i = 0; i < arrayLength - 1; ++i) {
        // loop through the array again from the current value of i to the last
        for (size_t j = i + 1; i < arrayLength; ++j) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
            }
        }
    }
    return result;
}

void printArray(const int *nums, size_t arrayLength) {
    for (size_t i = 0 ; i < arrayLength; ++i) {
        printf("%d ", *(nums + i));
    }
    puts("");
}