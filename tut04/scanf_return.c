// Exploring scanf's return value
// scanf_return.c
//
// This program was written by F11C
// on 8th of October
//
// Tests the return values of scanf() in specific cases.

int main(void) {

    int whole_number;
    printf("Enter an int: ");
    int result = scanf("%d", &whole_number);

    /*
    double floating_point;
    printf("Enter a double: ");
    int result = scanf("%lf", &floating_point);
    */

    /*
    char character;
    printf("Enter a character: ");
    int result = scanf("%c", &character);
    */

    /*
    int first;
    int second;
    printf("Enter two ints: ");
    int result = scanf("%d %d", &first, &second);
    */

    printf("The result of scanf() is %d\n", result);

    return 0;
}