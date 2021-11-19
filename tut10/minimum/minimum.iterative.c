
#include <limits.h>
#include <stdio.h>

#include "list.h"

int minimum(struct node* head);

int main(int argc, char *argv[]) {
    struct node *head = args_to_list(argc, argv);

    printf("Minimum is %d\n", minimum(head));

    return 0;
}

// struct node {
//     int data;
//     struct node *next;
// }

int minimum(struct node *head) {
    if (head == NULL) {
        return INT_MAX;
    }

    int min = head->data;
    struct node *curr = head;
    while (curr != NULL) {
        if (min > curr->data) {
            min = curr->data;
        }

        curr = curr->next;
    }

    return min;
}