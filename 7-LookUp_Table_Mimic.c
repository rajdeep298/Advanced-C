#include <stdio.h>

enum foo {
    foo_2=0,
    foo_3,
    foo_4
};

static int square[] = {
    [foo_2] = 4,
    [foo_3] = 9,
    [foo_4] = 16
};
//or
// static int square[] = {
//     // [foo_2] = 4,
//     // [foo_3] = 9,
//     // [foo_4] = 16

//     //order can be changed
//     [foo_4] = 16,
//     [foo_3] = 9,
//     [foo_2] = 4
// };


static char case_convert[]={
    ['a'] = 'A',
    ['b'] = 'B',
    ['c'] = 'C',
    ['d'] = 'D',
    ['e'] = 'E',
    ['f'] = 'F',
    ['g'] = 'G',
    ['h'] = 'H',
    ['i'] = 'I',
    ['j'] = 'J',
    ['k'] = 'K',
    ['l'] = 'L',
    ['m'] = 'M',
    ['n'] = 'N',
    ['o'] = 'O',
    ['p'] = 'P',
    ['q'] = 'Q',
    ['r'] = 'R',
    ['s'] = 'S',
    ['t'] = 'T',
    ['u'] = 'U',
    ['v'] = 'V',
    ['w'] = 'W',
    ['x'] = 'X',
    ['y'] = 'Y',
    ['z'] = 'Z'
};


void main() {
    enum foo key = foo_3;
    printf("Value for foo_3: %d\n", square[key]);

    printf("Value for 'a': %c\n", case_convert['a']);
}