// Bars
// bars.c
//
// This program was written by F11C
// on 1st of October 2021
//
// Prints out a grid in the format:
// -*-*-*-*-
// -*-*-*-*-
// -*-*-*-*-
// -*-*-*-*-
// -*-*-*-*-
// -*-*-*-*-
// -*-*-*-*-
// -*-*-*-*-
// -*-*-*-*-
// when n = 9
//
// We have dashes    in columns 1, 3, 5, 7, 9
// We have asterisks in columns 2, 4, 6, 8

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int size;
    printf("Enter an integer: ");
    scanf("%d", &size);

    int row = 0;
    while (row < size) {
        int col = 0;
        while (col < size) {
            if (col % 2 == 0) {
                printf("-");
            } else {
                printf("*");
            }
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}
