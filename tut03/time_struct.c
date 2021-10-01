// Time in struct
// time_struct.c
//
// This program was written by F11C
// on 1st of October 2021
// 
// Creates a struct which holds the time in hh:mm [ap]m time
// and prints it out.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_HOUR 11

struct time {
    // Hours
    int hours;
    // Minutes
    int minutes;
    // AM / PM
    char am_pm;
};

struct date {
    int month;
    int day;
    struct time time;
};

int main(void) {

    // Declaring the variable
    struct time tut_start;

    // Initialise the variable
    tut_start.hours = 11;
    tut_start.minutes = 03;
    tut_start.am_pm = 'a';

    printf("%2d:%02d %cm\n", tut_start.hours, tut_start.minutes, tut_start.am_pm);

    return 0;
}
