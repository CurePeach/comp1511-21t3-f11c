// Scanning in characters in a loop
// character_loop.c
//
// This program was written by F11C
// on 8th of October
//
// Scans in characters until CTRL+D is pressed.
// If a letter is pressed, print which letter was pressed.

#include <stdio.h>

int main(void) {

    // INITIALISATION
    // char c;
    // int result = scanf("%c", &c);
    // // c = a
    // // CONDITION
    // while (result == 1) {
    //     // if (is_letter(c) == 1) {
    //     // }
    //     printf("'%c' scanned in!\n", c);

    //     // INCREMENT
    //     result = scanf("%c", &c);
    // }

    int num;
    while (scanf("%d", &num) == 1) {
        printf("'%d' scanned in!\n", num);
    }

    return 0;
}

// int is_letter(char c) {

//     return is_lower(c) || is_upper(c);
// }
