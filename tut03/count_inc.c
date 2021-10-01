// Counting up in increments
// count_inc.c
//
// This program was written by F11C
// on 1st of October 2021
//
// Scans in two positive numbers: an end and an increment.
// It counts up from 1 increasing by the increment until it equals or
// surpasses the end, and prints the numbers one per line.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int end;
    printf("Enter end: ");
    scanf("%d", &end);

    int increment;
    printf("Enter increment: ");
    scanf("%d", &increment);

    // int i = 0;
    // while (i < end) {
    //     printf("%d\n", i + 1);
    //     i++;
    // }

    // int i = 0;
    // while (i < end) {
    //     printf("%d\n", i);
    //     i++;
    // }
    // printf("%d\n", i);
    
    int i = 1;
    while (i <= end) {
        printf("%d\n", i);
        // i = i + increment;
        i += increment;
    }

    return 0;
}
