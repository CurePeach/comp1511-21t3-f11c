//
// Author: F11C
// Date: 5th November 2021
//
// Description:
// Exploring malloc().

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 64

struct student {
    int zID; 
    double mark; 
    char name[MAX_NAME_LENGTH]; 
};

struct student *create_student(int zID, double mark, char *name);

int main(void) {
    // TODO: how do we use sizeof? 
    printf("char :: %zu\n", sizeof(char));
    printf("int :: %zu\n", sizeof(int));
    printf("double :: %zu\n", sizeof(double));

    // TODO: how do we use malloc?
    // int *num = malloc(sizeof(int));
    struct student *clarissa = create_student(7777777, 100, "Clarissa");
    printf("%s (%d): %lf\n", clarissa->name, clarissa->zID, clarissa->mark);

    return 0;
}

// struct student {
//     int zID; 
//     double mark; 
//     char name[MAX_NAME_LENGTH]; 
// };

struct student *create_student(int zID, double mark, char *name) {
    struct student *stu = malloc(sizeof(struct student));
    stu->zID = zID;
    stu->mark = mark;
    strcpy(stu->name, name);

    return stu;
}