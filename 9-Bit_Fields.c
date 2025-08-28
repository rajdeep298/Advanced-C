#include <stdio.h>

// |4 bits|4 bits|1 bits|7 bits|
struct foo
{
    unsigned int a : 4;
    unsigned int b : 4;
    unsigned int c : 1;
    unsigned int d : 7;
};

int main() {
    struct foo myFoo;

    myFoo.a = 15;  // 4 bits
    myFoo.b = 7;   // 4 bits
    myFoo.c = 1;   // 1 bit
    myFoo.d = 63;  // 7 bits

    printf("Size of struct foo: %zu bytes\n", sizeof(myFoo));
    printf("Values: a=%u, b=%u, c=%u, d=%u\n", myFoo.a, myFoo.b, myFoo.c, myFoo.d);


    // Error Case
    // myFoo.a = 16;  // Exceeds 4 bits (max value is 15)
    // myFoo.b = 8;   // Exceeds 4 bits (max value is 7)
    // myFoo.c = 2;   // Exceeds 1 bit (max value is 1)
    // myFoo.d = 128; // Exceeds 7 bits (max value is 127) // This will cause undefined behavior
    // // Error: myFoo.d = 128; // Exceeds 7 bits (max value is 127) // This will cause undefined behavior

    // printf("Size of struct foo: %zu bytes\n", sizeof(myFoo));
    // printf("Values: a=%u, b=%u, c=%u, d=%u\n", myFoo.a, myFoo.b, myFoo.c, myFoo.d);

    return 0;
}
