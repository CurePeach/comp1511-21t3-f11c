// Week 8 Tutorial: Letters
// letters.c
//
// You must change this file.
//
// Implements the functions required.
//

#include "letters.h"

int check_letter(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return TRUE;
    }

    if (ch >= 'a' && ch <= 'z') {
        return TRUE;
    }

    return FALSE;
}