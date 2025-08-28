#include <stdio.h>
#include <stdarg.h>

int sum_all(int count ,...){
    va_list ap;
    va_start(ap, count);
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(ap, int);
    }
    va_end(ap);
    return sum;
}


void main() {
    printf("Sum: %d\n", sum_all(3, 10, 20, 30));
}