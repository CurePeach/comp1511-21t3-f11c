//
// Author: F11C
// Date: Friday 29th October
//
// Description:
// Exploring command line arguments

#include <stdio.h>

int main(int argc, char *argv[]) {

    int i = 0;
    while (i < argc) {
        printf("argv[%d] = ", i);
        // printf("%s\n", argv[i]);

        char *word = argv[i];
        int j = 0;
        while (word[j] != '\0') {
            printf("%c", word[j]);
            j++;
        }
        printf("\n");

        i++;
    }

    return 0;
}