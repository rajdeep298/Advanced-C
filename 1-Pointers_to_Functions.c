#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// int foo(int x ,int y){
//     return x+y;
// }

//one useful case 

bool is_even(int x) {
    return x % 2 == 0;
}

void print_if_even(int *xs, bool (*predicate)(int)){
    for(int i=0; i<5; i++){
        if(predicate(xs[i])){
            printf("%d\n", xs[i]);
        }
    }
}

void main(){
    // int (*fobj)(int, int);
    // //int (*fobj)(int, int) = foo; // also valid
    // fobj = &foo;
    // printf("%d\n", fobj(2, 3));

    int xs[] = {1,2,3,4,5};
    print_if_even(xs, is_even);//function names can be passed as pointers
}