#include <stdio.h>

// # define FOO(x,y) printf(" %s + %s = %d\n", #x, #y, (x)+(y))

// #define PREFIX(var_name) new_##var_name //This is a token-pasting macro using ##. It joins the literal new_ with whatever you pass in as the var_name.

#define GENERIC_ADD_FUNCTION(type) \
    type add_##type(type x, type y) { \
        return x+y; \
    }


GENERIC_ADD_FUNCTION(int)
GENERIC_ADD_FUNCTION(float)
GENERIC_ADD_FUNCTION(double)

void main() {
    // int a = 5, b = 10, first = 15, second = 20;
    // FOO(a,b);
    // FOO(123,456);
    // FOO(first, second);

    // int PREFIX(FOO) = 100;
    // printf("New FOO: %d\n", new_FOO);

    printf("Int Add: %d\n", add_int(5, 10));
    printf("Float Add: %f\n", add_float(5.5, 10.5));
    printf("Double Add: %lf\n", add_double(5.5, 10.5));
}