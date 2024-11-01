//
// Created by David Good on 10/28/24.
//
#include <stdio.h>

void logic_operators() {
    int a = 10, b = 5, c;

    // Arithmetic operators
    c = a + b;
    printf("a + b = %d\n", c);

    c = a - b;
    printf("a - b = %d\n", c);

    c = a * b;
    printf("a * b = %d\n", c);

    c = a / b;
    printf("a / b = %d\n", c);

    c = a % b;
    printf("a %% b = %d\n", c); // %% is used to print a %

    // Comparison operators
    printf("a == b: %d\n", a == b);     // False, 0
    printf("a != b: %d\n", a != b);     // True,  1
    printf("a > b: %d\n", a > b);       // True,  1
    printf("a < b: %d\n", a < b);       // False, 0
    printf("a >= b: %d\n", a >= b);     // True,  1
    printf("a <= b: %d\n", a <= b);     // False, 0

    // Logical operators
    int x = 1, y = 0;

    printf("x && y: %d\n", x && y); // False, 0 (logical AND)
    printf("x || y: %d\n", x || y); // True, 1 (logical OR)
    printf("!x: %d\n", !x);         // False, 0 (logical NOT)
}

/*
 * function to print the bits of a number
 * use char to keep the bits small
 */
void print_bits(int num) {
    int num_bits = sizeof(char) * 8; // Number of bits in a char

    printf("Binary representation of %d: \t", num);
    for (int i = num_bits - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit); // bit is 1 or 0

        // Add a space every 4 bits for readability
        if (i % 4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

void shift_left() {
    int b = 5, c;
    c = b << 1;
    printf("Shift Left of %d by 1 \t %d\n", b, c);
    print_bits(c);

    c = b << 2;
    printf("Shift Left of %d by 2 \t %d\n", b, c);
    print_bits(c);
}

void shift_right() {
    int a = 10, c;

    c = a >> 1;
    printf("Shift Right of %d by 1 \t %d\n", a, c);
    print_bits(c);

    c = a >> 2;
    printf("Shift Right of %d by 2 \t %d\n", a, c);
    print_bits(c);
}

void bitwise_operators() {
    int a = 10, b = 5, c;

    print_bits(a);
    print_bits(b);

    c = a & b;
    printf("Bitwise AND of %d and %d \t %d\n",a, b, c);
    print_bits(c);

    c = a | b;
    printf("Bitwise OR of %d and %d \t %d\n", a, b, c);
    print_bits(c);

    c = a ^ b;
    printf("Bitwise XOR of %d and %d \t %d\n", a, b, c);
    print_bits(c);

    c = ~a;
    printf("Bitwise NOT of %d \t %d\n", a, c);
    print_bits(c);


}