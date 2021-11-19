
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
    // Base case
    if (head == NULL) {
        return INT_MAX;
    }

    // Recursive case
    // 23 -> 24 -> 20 -> X
    //       24 -> 20 -> X
    //             20 -> X
    //                   X
    //                   100
    //             20 vs 100
    //             20
    //       24 vs 20
    //       20
    // 23 vs 20
    // 20
    int rest_min = minimum(head->next);
    if (head->data < rest_min) {
        return head->data;
    }

    return rest_min;
}