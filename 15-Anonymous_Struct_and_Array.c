#include <stdio.h>

struct Vec2{
    int x;
    int y;
};

int scale_sum(int scalar, struct Vec2 vec) {
    return (vec.x + vec.y) * scalar;
}

int sum(int xs[], int len){
    int s = 0;
    for(int i = 0; i < len; i++) {
        s += xs[i];
    }
    return s;
}

void main(){
    // struct Vec2 v = {2, 3};
    // printf("Scaled Sum: %d\n", scale_sum(2, v));

    // int arr[] = {1, 2, 3, 4, 5};
    // printf("Array Sum: %d\n", sum(arr, 5));

    int result = scale_sum(2, (struct Vec2){2, 3});
    printf("Scaled Sum: %d\n", result);

    int s = sum((int[]){1, 2, 3, 4, 5}, 5);
    printf("Array Sum: %d\n", s);
}