#include <stdio.h>

// #define ADD(x,y) x+y //incorrect
#define ADD(x,y) (x+y)
// #define MUL(x,y) (x*y) //incorrect
#define MUL(x,y) ((x)*(y)) // this is correct because here x and y are both evaluated in their own context

#define RANGE_SUM(x,y) \
    int sum =0; \
    for(int i=x; i<=y; i++) { \
        sum += i; \
    } \
    printf("Range Sum: %d\n", sum);


    void main() {
    int a = 5, b = 10;
    printf("Product: %d\n", 5*ADD(a, b));
    printf("Product: %d\n", MUL(a, a+b));
    RANGE_SUM(a, b);
}