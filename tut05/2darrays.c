// Exploring 2D arrays
// 2darrays.c
//
// This program was written by F11C
// on 15th of October
//
// Exploring 2D arrays and how to use them

#include <stdio.h>

#define SIZE 7

void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar);

int main(void) {

    int sample[SIZE][SIZE] = {
        {1, 2, 3, 4, 5, 6, 7},
        {1, 2, 3, 4, 5, 6, 7},
        {1, 2, 3, 4, 5, 6, 7},
        {1, 2, 3, 4, 5, 6, 7},
        {1, 2, 3, 4, 5, 6, 7},
        {1, 2, 3, 4, 5, 6, 7},
        {1, 2, 3, 4, 5, 6, 7}
    };

    scalar_multiply(SIZE, SIZE, sample, 2);

    int row = 0;
    while (row < SIZE) {
        int column = 0;
        while (column < SIZE) {
            printf("%d ", sample[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}

// Multiplies a matrix by the scalar
// Takes in rows and columns which are the sizes of the matrix array and the scalar
// to multiply
// Returns nothing
void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar) {
    
    int row_num = 0;
    while (row_num < rows) {

        int col_num = 0;
        while (col_num < columns) {
            // matrix[row_num][col_num] = matrix[row_num][col_num] * scalar;
            matrix[row_num][col_num] *= scalar;

            col_num++;
        }

        row_num++;
    }


    return;
}