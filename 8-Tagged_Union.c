#include <stdio.h>
#include <stdbool.h>

enum tag{
    TAG_BOOL,
    TAG_INT,
    TAG_FLOAT
};

struct  Dynamic
{
    enum tag type;
    // union {
    //     bool b;
    //     int i;
    //     float f;
    // } data;
     
    //or
    union {
        bool b;
        int i;
        float f;
    }; 
};

void main() {
    struct  Dynamic d;
    printf("Size of Dynamic: %zu bytes\n", sizeof(d));

    d.type = TAG_INT;
    // d.data.i = 42;
    d.i = 42;

    switch(d.type) {
        case TAG_BOOL:
            // printf("Dynamic holds a bool: %d\n", d.data.b);
            printf("Dynamic holds a bool: %d\n", d.b);
            break;
        case TAG_INT:
            // printf("Dynamic holds an int: %d\n", d.data.i);
            printf("Dynamic holds an int: %d\n", d.i);
            break;
        case TAG_FLOAT:
            // printf("Dynamic holds a float: %f\n", d.data.f);
            printf("Dynamic holds a float: %f\n", d.f);
            break;
    }

}

