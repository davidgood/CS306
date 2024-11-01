//
// Created by David Good on 10/30/24.
//

#include "string_demos.h"
#include <string.h>
#include <stdio.h>

void strcat_demo() {
    char str1[20] = "Hello, ";
    char str2[20] = "World!";

    printf("length of str1: %ld\n", strlen(str1));
    printf("length of str2: %ld\n", strlen(str2));

    strcat(str1, str2); // Concatenates str2 onto str1
    printf("strcat: %s\n", str1);
}

void strcmp_demo() {
    char str1[] = "apple";
    char str2[] = "banana";

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }
}

void strchr_demo() {
    char str[] = "Hello, world!";
    char ch = 'o';

    char *ptr = strchr(str, ch);

    if (ptr != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, ptr - str);
    } else {
        printf("Character '%c' not found.\n", ch);
    }
}

void strstr_demo() {
    char str[] = "The quick brown fox";
    char substr[] = "quick";

    char *ptr = strstr(str, substr);

    if (ptr != NULL) {
        printf("Substring \"%s\" found at position: %ld\n", substr, ptr - str);
    } else {
        printf("Substring \"%s\" not found.\n", substr);
    }
}

void strpbrk_demo() {
    char str[] = "hello world";
    char chars[] = "aeiou";

    char *ptr = strpbrk(str, chars);

    if (ptr != NULL) {
        printf("First vowel found in \"%s\" is '%c' at position: %ld\n", str, *ptr, ptr - str);
    } else {
        printf("No vowels found in \"%s\".\n", str);
    }
}

void strtok_demo() {
    char str[] = "hello,world,example";
    char *delimiter = ",";
    char *token = strtok(str, delimiter);

    printf("Tokens:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiter); // Continue to get the next token
    }
}

void memset_demo() {
    char buffer[10];

    // Set all bytes in buffer to 'A'
    memset(buffer, 'A', sizeof(buffer) - 1);
    buffer[9] = '\0'; // Null-terminate for safe printing

    printf("Buffer after memset: %s\n", buffer); // Output: "AAAAAAAAA"
}

void memcmp_demo() {
    char str1[] = "apple";
    char str2[] = "apple";
    char str3[] = "banana";

    int result = memcmp(str1, str2, sizeof(str1));
    printf("Comparing str1 and str2: %s\n", result == 0 ? "Equal" : "Not Equal");

    result = memcmp(str1, str3, sizeof(str1));
    printf("Comparing str1 and str3: %s\n", result == 0 ? "Equal" : "Not Equal");
}

void memcpy_demo() {
    char source[] = "Hello, World!";
    char destination[20];

    // Copy 13 bytes from source to destination
    memcpy(destination, source, strlen(source) + 1);

    printf("Destination after memcpy: %s\n", destination); // Output: "Hello, World!"
}

void string_bug() {

    char str[5] = {'H', 'e', 'l', 'l', 'o'}; // Missing '\0'
    printf("Non-terminated string length: %lu\n", strlen(str));
}
