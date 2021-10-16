// Scanf revisited 

#include <stdio.h>

void change_num(int *);

int main(void) {
  
    int num = 1511;

    printf("Before change_num: %d\n", num);

    change_num(&num); 
    // scanf("%d", &num); // The '&' allows us to modify the original variable

    printf("After change_num: %d\n", num);

    // 'array' is the address of the first element in the array
    int array[5] = {0};
    printf("array: %p\n", &array);
    printf("&array[0]: %p\n", &array[0]);

    return 0;
}

// Modifies the 'num' variable via a pointer
void change_num(int *flamingo) {
    *flamingo = 42;
}