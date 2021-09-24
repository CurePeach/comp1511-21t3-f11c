//
// By F11C
// 
// Example if statements
//

#include <stdio.h>

#define UPPER_LIMIT 10

int main(void) {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num > UPPER_LIMIT) {
        printf("Above the upper limit\n");
    } else {
        printf("Below the upper limit\n");
    }

    return 0;
}