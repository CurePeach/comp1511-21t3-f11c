//
// Author: F11C
// Date: Friday 29th October
//
// Description:
// Reads lines of input and prints them twice.


#include <stdio.h>

#define MAX_LINE_LENGTH 80

void echo_twice(char *string);

int main(void) {

    // char *string1 = "Hello";
    // printf("%s", string1);
    // VS
    // printf("Hello");

    // char string2[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};

    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, stdin) != NULL) {
        echo_twice(line);
    }

    return 0;
}

void echo_twice(char *string) {
    printf("%s", string);
    printf("%s", string);
}

