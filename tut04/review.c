//
// Author: anonymous
// Date: unknown
//
// Description: 
// Scans in two numbers, adds them together and prints it.
// Determines which was even and which was odd.

#include <stdio.h>

int main(void) {

    int num1;
    int num2;
    int sum;

    scanf("%d", &num1);
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("Your numbers add up to %d\n", sum);

    // If the sum is divisible by 2, that means the numbers were either both 
    // even or both odd.
    if (sum % 2 != 0) {
        if(num1 % 2 == 0) {
            printf("The first number you've typed was even and the second number was odd\n");
        } else if (num1 % 2 != 0) {
            printf("The first number you've typed was odd and the second number was even\n");
        }
    } else if (sum % 2 == 0) {
        if(num1 % 2 == 0) {
            printf("Both the numbers you've typed were even\n"); 
        } else if (num1 % 2 != 0) {
            printf("Both the numbers you've typed were odd\n");
        }
    }

    return 0;
}