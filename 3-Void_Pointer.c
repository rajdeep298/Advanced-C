#include <stdio.h>
#include <stdlib.h>

void *create_array(int element_size, int num_elements) {
    return malloc(element_size * num_elements);
}

void main() {
    void *obj;
    int a = 5;
    float b = 3.14;

    obj = &a;
    // printf("Value of a: %d\n", *obj); // This will cause an error as void pointer cannot be dereferenced
    // .\3-Void_Pointer.c: In function 'main':
    // .\3-Void_Pointer.c:10:32: warning: dereferencing 'void *' pointer
    // 10 |     printf("Value of a: %d\n", *obj); // This will cause an error as void pointer cannot be dereferenced
    //    |                                ^~~~
    // .\3-Void_Pointer.c:10:32: error: invalid use of void expression
    printf("Value of a: %d\n", *(int *)obj);

    obj = &b;
    printf("Value of b: %f\n", *(float *)obj);

    int *int_array = (int *)create_array(sizeof(int), 5);
    for (int i = 0; i < 5; i++) {
        int_array[i] = i * 10;
        printf("int_array[%d] = %d\n", i, int_array[i]);
    }

    free(int_array);
}