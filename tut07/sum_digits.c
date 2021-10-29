//
// Author: F11C
// Date: Friday 29th October
//
// Description:
// Reads characters from input. When the end of input is reached, it should
// print a count of the number of digits in its input and their sum.


#include <stdio.h>


int main(void) {

    int ch;
    int count = 0;
    int sum = 0;
    while ((ch = getchar()) != -1) {
        if (ch >= '0' && ch <= '9') {
            count++;
            sum += ch - '0';
        }
    }

    printf("Count = %d and sum = %d\n", count, sum);


    return 0;
}
