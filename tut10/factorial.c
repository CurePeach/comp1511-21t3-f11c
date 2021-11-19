
#include <stdio.h>

int factorial(int num);

int main(void) {
    printf("Enter number: ");
    int num;
    scanf("%d", &num);

    printf("Factorial %d is %d\n", num, factorial(num));
}

int factorial(int num) {
    // Base case
    if (num <= 1) {
        return 1;
    }

    // Recursive case
    // 3! = 3 * 2 * 1
    // 2! =     2 * 1
    // 1! =         1
    //
    // 5! = 5 * 4!
    // 4! = 4 * 3! 
    // ...
    return num * factorial(num - 1);
}