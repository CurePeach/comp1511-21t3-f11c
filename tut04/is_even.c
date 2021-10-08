// Checks if the user inputs an even or an odd number
// is_even.c
//
// This program was written by F11C
// on 8th of October
//
// Scans in a number and tells the user if it was even or odd

#include <stdio.h>

int sum(int a, int b, int c);
int is_even(int num);

int main(void) {

    printf("Enter number: ");
    int num;
    scanf("%d", &num);

    // TODO: how can we use a function named `is_even` to complete this
    // program?

    // int result = sum(1, 2, 3);
    // printf("Result of sum is %d\n", result);

    if (is_even(num) == 1) {
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }

    return 0;
}

// Checks if num is even <- description
// Takes in an integer <- input
// Returns 0 if its odd and 1 if its even <- output
int is_even(int num) {

    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }

    return 0;
}

// Add three numbers together and return it
// Take in three integers
// Return the sum of the three integers
int sum(int a, int b, int c) {
    return a + b + c;
}

/*
char to_lower(char c) {
    return lowercase version of c;
}
*/