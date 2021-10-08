// Exploring arrays
// arrays.c
//
// This program was written by F11C
// on 8th of October
//
// Completes the tutorial questions about arrays.

#include <stdio.h>

#define ONES_LENGTH 10
#define SQUARES_LENGTH 20

void print_array(int array[], int length);
void initialise_array(int array[], int num, int length);
void squares(int array[], int length);

int main(void) {
    // TODO: create an array called zeroes of a size 7 and initialise to 0
    int zeroes[7] = {0};
    // int num   =  0;

    // TODO: how do we print them?
    printf("Printing the array `zeroes`\n");
    print_array(zeroes, 7);

    initialise_array(zeroes, 5, 7);
    printf("Printing the array `zeroes` after calling initialise_array\n");
    print_array(zeroes, 7);

    // printf("%d\n", zeroes[0]);
    // printf("%d\n", zeroes[1]);
    // printf("%d\n", zeroes[2]);
    // printf("%d\n", zeroes[3]);
    // printf("%d\n", zeroes[4]);
    // printf("%d\n", zeroes[5]);
    // printf("%d\n", zeroes[6]);

    // TODO: create an array called ones of a size 7 and initialise to 1
    // int ones[7] = {1, 1, 1, 1, 1, 1, 1};

    int ones[ONES_LENGTH];
    initialise_array(ones, 1, ONES_LENGTH);

    // TODO: create a print_array function
    printf("Printing the array `ones`\n");
    print_array(ones, ONES_LENGTH);

    // TODO: create a squares() function such that it changes the values in the
    // given array to the squares of the index
    // array[0] = 0;
    // array[1] = 1;
    // array[2] = 4;
    // array[3] = 9;
    int result[SQUARES_LENGTH] = {0};
    squares(result, SQUARES_LENGTH);
    printf("Printing the result of squares()\n");
    print_array(result, SQUARES_LENGTH);

    return 0;
}

// Prints the array
// Takes in an array
// Returns nothing
void print_array(int array[], int length) {

    int count = 0;
    while (count <= length - 1) {
        printf("%d\n", array[count]);
        count++;
    }

    return;
}

// Initialise the given array with the given number
// Takes in an array and a number
// Returns nothing
void initialise_array(int array[], int num, int length) {
    
    int count = 0;
    while (count <= length - 1) {
        array[count] = num;
        count++;
    }

    return;
}

void squares(int array[], int length) {

    int count = 0;
    while (count <= length - 1) {
        array[count] = count * count;
        count++;
    }

    return;
}