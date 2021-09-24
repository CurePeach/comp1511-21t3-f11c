
#include <stdio.h> 

#define UPPER_TO_LOWER ('a' - 'A')

int main(void) {

    printf("A + 32 = %c\n", 'A' + UPPER_TO_LOWER);

    return 0;
}