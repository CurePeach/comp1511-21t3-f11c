//
// Author: F11C
// Date: Friday 29th October
//
// Description:
// Manipulate structs through pointers.


#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 64
#define ZID_LENGTH 7 + 1

struct student {
    char name[MAX_STRING_LENGTH];
    char zid[ZID_LENGTH];
    double wam;
};

int main(void) {

    struct student stu;

    struct student *stu_ptr = &stu;
    
    // (*stu_ptr).wam = 100;
    stu_ptr->wam = 100;

    // stu_ptr->name = "Clarissa"; DOESNT WORK
    strcpy(stu_ptr->name, "Clarissa");
    strcpy(stu_ptr->zid, "5555555");

    return 0;
}