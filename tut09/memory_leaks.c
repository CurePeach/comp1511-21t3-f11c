
#include <stdlib.h>

#include "list.h"

struct node *insert_first(int data, struct node *next);

int main(void) {
    int i = 0;
    struct node *head = NULL;
    while (i < 10) {
        head = insert_first(i, head);
        i++;
    }
    print_list(head);

    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

// Insert at the beginning of the linked list
struct node *insert_first(int data, struct node *next) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = next;

    return new;
}