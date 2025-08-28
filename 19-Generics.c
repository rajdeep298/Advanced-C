#include <stdio.h>

int add_int(int a, int b) {
    return a + b;
}

float add_float(float a, float b) {
    return a + b;
}

double add_double(double a, double b) {
    return a + b;
}


#define add(a,b) _Generic((a),    \
    int: add_int ((a), (b)),      \
    float: add_float((a), (b)),   \
    double: add_double((a), (b))  \
)

void main() {
    int ai = 1, bi = 2;
    float af = 1.12, bf = 2.34;
    double ad  = 1.123456, bd = 2.345678;

    // printf("Int addition: %d\n", add_int(ai, bi));
    // printf("Float addition: %.2f\n", add_float(af, bf));
    // printf("Double addition: %.6f\n", add_double(ad, bd));



    printf("Int addition: %d\n", add(ai, bi));
    printf("Float addition: %.2f\n", add(af, bf));
    printf("Double addition: %.6f\n", add(ad, bd));
}