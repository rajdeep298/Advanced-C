#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

void main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Size of array: %zu bytes\n", sizeof(arr));
    // printf("Number of elements in array: %zu\n", sizeof(arr) / sizeof(arr[0]));
    //or
    printf("Number of elements in array: %zu\n", ARRAY_SIZE(arr));
}
