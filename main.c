#include <stdio.h>
#include "operators.h"
#include "string_demos.h"

void pointers(){

    int x = 5;      // regular int
    int *y = &x;    // pointer to x
    int **z = &y;   // pointer to pointer to int
    int *a = *z;    // pointer to pointer to pointer to int


    printf("x   = %d\n", x);
    printf("y   = %p\n", y);
    printf("*y  = %d\n", *y);
    printf("z   = %p\n", z);
    printf("*z  = %p\n", *z);
    printf("**z = %d\n", **z);
    printf("a   = %p\n", a);
    printf("*a  = %d\n", *a);

    x = 6;          // This changes everything.

    printf("x   = %d\n", x);
    printf("y   = %p\n", y);
    printf("*y  = %d\n", *y);
    printf("z   = %p\n", z);
    printf("*z  = %p\n", *z);
    printf("**z = %d\n", **z);
    printf("a   = %p\n", a);
    printf("*a  = %d\n", *a);

}

void pointer_arithmetic() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Initialize pointer to start of array

    printf("Using pointer arithmetic to access array elements:\n");

    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d (Address: %p)\n", i, *ptr, (void *)ptr);
        ptr++; // Move pointer to the next element
    }
}

void pointer_arithmetic_with_chars() {
    char c = 'A';
    int i = 100;
    double d = 3.14;

    char *pChar = &c;
    int *pInt = &i;
    double *pDouble = &d;

    printf("pChar + 1 = %p\n", (void *)(pChar + 1)); // Moves 1 byte
    printf("pInt + 1 = %p\n", (void *)(pInt + 1));   // Moves 4 bytes
    printf("pDouble + 1 = %p\n", (void *)(pDouble + 1)); // Moves 8 bytes
}

void sample_arrays() {
    int array[5] = {10, 20, 30, 40, 50};

    int first = array[0];   // first == 10
    int second = array[1];  // second == 20

    // Uninitialized static array of integers:
    int arr[5];
    // Initialized static array of integers
    int arr2[5] = {1, 2, 3, 4, 5};

    // VLA with size defined at runtime
    int n = 5;
    int arr32[n];

    int arr4[3][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
    };
    int arr3D[2][3][4]; // 3D array

    int *ptr = &n;
    int y = *ptr;

    char str[10];
    fgets(str, sizeof(str), stdin);
}


int main() {

    strcat_demo();
    strcmp_demo();
    strchr_demo();
    strstr_demo();
    strpbrk_demo();
    strtok_demo();
    memset_demo();
    memcmp_demo();
    memcpy_demo();

    string_bug();

    logic_operators();

    bitwise_operators();

    shift_left();
    shift_right();

    pointers();

    pointer_arithmetic();
    pointer_arithmetic_with_chars();

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void reverse_string(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int get_string() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets input if present
    str[strcspn(str, "\n")] = '\0';

    printf("Original string: %s\n", str);
    reverse_string(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
