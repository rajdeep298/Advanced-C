#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


// Define bit flags as bit fields in one unsigned int
// typedef unsigned int t_flag; 
// #define FLAG_A (1 << 0)
// #define FLAG_B (1 << 1)
// #define FLAG_C (1 << 2)


//Using Enum
typedef enum {
    FLAG_A = 1 << 0,
    FLAG_B = 1 << 1,
    FLAG_C = 1 << 2
} t_flag;


// Here bool flags are used as separate parameters
// int func( int x , bool is_added , bool is_squared , bool is_not){
//     if(is_added){
//         x += x;
//     }
//     if(is_squared){
//         x *= x;
//     }
//     if(is_not){
//         x = -x;
//     }
//     return x;
// }


// Now replace all bit flag parameters
int func( int x , t_flag flags){
    if(flags & FLAG_A){
        x += x;
        flags &= ~FLAG_A; // Clear FLAG_A
    }
    if(flags & FLAG_B){
        x *= x;
    }
    if(flags & FLAG_C){
        x = -x;
    }
    return x;
}


void main(){
    // int result = func(5, true, false, true);
    int result = func(5, 0);// No flags set
    printf("%d\n", result);

    result = func(5, FLAG_A ); // Only FLAG_A set
    printf("%d\n", result);

    result = func(5, FLAG_B | FLAG_C ); // Only FLAG_B and FLAG_C set
    printf("%d\n", result);
}