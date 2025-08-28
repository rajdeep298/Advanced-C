#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Enum to define type of objects
typedef enum {
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_DOUBLE,
    TYPE_CHAR
} DataType;

// Generic allocator function
void *create_object(DataType type, void *value) {
    void *obj = NULL;

    switch (type) {
        case TYPE_INT:
            obj = malloc(sizeof(int));
            if (obj && value) *(int *)obj = *(int *)value;
            break;

        case TYPE_FLOAT:
            obj = malloc(sizeof(float));
            if (obj && value) *(float *)obj = *(float *)value;
            break;

        case TYPE_DOUBLE:
            obj = malloc(sizeof(double));
            if (obj && value) *(double *)obj = *(double *)value;
            break;

        case TYPE_CHAR:
            if (value) {
                size_t len = strlen((char *)value);
                obj = malloc(len + 1);
                if (obj) strcpy((char *)obj, (char *)value);
            }
            break;

        default:
            return NULL;
    }

    return obj;
}



int main() {
    int i = 4;
    float f = 3.14f;
    char *s = "Apple";

    int *int_ptr = (int *)create_object(TYPE_INT, &i);
    float *float_ptr = (float *)create_object(TYPE_FLOAT, &f);
    char *char_ptr = (char *)create_object(TYPE_CHAR, s);  // Fixed: pass s, not &s

    printf("Integer: %d\n", *int_ptr);
    printf("Float: %f\n", *float_ptr);
    printf("String: %s\n", char_ptr);

    free(int_ptr);
    free(float_ptr);
    free(char_ptr);

    return 0;
}
