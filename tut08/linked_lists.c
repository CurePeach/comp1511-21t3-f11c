#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

// Student struct node
struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
		//TODO
    struct student *next;
};

struct student *create_student(int zID, double mark, char *name);


int main(void) {
  printf("Intro to Linked Lists!\n");

  // harry == 0xGG
  struct student *harry = create_student(500000, 71.3, "Harry");
  
  struct student *lucy = create_student(5111111, 62.9, "Lucy");
  struct student *fatima = create_student(5222222, 1, "Fatima");
  struct student *carlos = create_student(5333333, 2, "Carlos");
  struct student *feng = create_student(544444, 3, "Feng");

  harry->next = lucy;
  lucy->next = fatima;
  fatima->next = carlos;
  carlos->next = feng;
  // feng->next = NULL;

  // Version 1: sad version
  // printf("%s\n", harry->name);
  // printf("%s\n", harry->next->name);
  // printf("%s\n", harry->next->next->name);
  // printf("%s\n", harry->next->next->next->name);
  // printf("%s\n", harry->next->next->next->next->name);

  // Version 2: happy version
  // curr == NULL
  struct student *curr = harry;
  while(curr != NULL) {
    printf("%s\n", curr->name);
    curr = curr->next;
  }


  return 0;
}


// Creates a new struct student and returns a pointer to it
struct student *create_student(int zID, double mark, char *name) {
    struct student *new_student = malloc(sizeof(struct student));
    new_student->zID = zID;
    new_student->mark = mark;
    new_student->next = NULL;
    strcpy(new_student->name, name);
    return new_student;
}