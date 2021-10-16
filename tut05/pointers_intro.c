// Declaring pointer and dereferencing 

#include <stdio.h>

int main(void) {

    int num = 42;
    printf("num: %d\n", num);
    printf("&num: %p\n", &num);

    // Declaring
    int *my_pointer = &num;
    printf("&my_pointer: %p\n", &my_pointer);
    printf("my_pointer: %p\n", my_pointer);

    // Dereferencing
    *my_pointer = 5; \
    printf("num = %d\n", num);
}