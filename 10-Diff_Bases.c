#include <stdio.h>

void main () {
    int decimal = 42;
    int hexadecimal = 0x2A;
    int octal = 052;
    printf("Decimal: %d\n", decimal);
    printf("Hexadecimal: %x\n", hexadecimal);
    printf("Octal: %o\n", octal);

    //Changing
    decimal = 98;
    printf("Now Base changing ->\n");
    printf("Changing: %o\n", decimal);
    printf("Changing: %x\n", decimal);
}