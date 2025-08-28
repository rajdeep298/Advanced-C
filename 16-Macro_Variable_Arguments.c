#include <stdio.h>

#define PRINTF_LOOP(iterations, ...) \
    for (int i = 0; i < iterations; i++) { \
        printf(__VA_ARGS__); \
    }

void main() {
    PRINTF_LOOP(2, "Hello, World % u!\n" ,2);
    PRINTF_LOOP(3, "%d %s\t\n",4 ,"Hello");
}