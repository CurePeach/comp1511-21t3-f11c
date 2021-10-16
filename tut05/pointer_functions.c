// Tutorial Questions 8 & 9

#include <stdio.h>

void sum_nums(int a, int b, int *sum);
int *max(int *a, int *b);

int main(void) {
    int a = 5;
    printf("&a = %p\n", &a);

    int b = 20;
    printf("&b = %p\n", &b);

    // Question 8
    int sum = 0;

    printf("Sum before func: %d\n", sum);
    sum_nums(a, b, &sum);
    printf("Sum after func: %d\n", sum);

    // Question 9
    int *max_pointer = max(&a, &b);

    printf("max_pointer = %p\n", max_pointer);
    printf("*max_pointer = %d\n", *max_pointer);

    return 0;
}

// Updates 'sum' via a pointer
void sum_nums(int a, int b, int *sum) {
    *sum = a + b;  
} 

// Returns a pointer to the variable with the largest value
int *max(int *a, int *b) {
    if (*a < *b) { 
        return b;
    }
    return a;
} 
