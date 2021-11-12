// Program to do various linked list exercises
// Written by <your-name> (zID) on <date>

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct node *new_node(int data);
struct node *last_node(struct node *head);

int main(void) {

    /*
    struct node *head = add_last(NULL, 10);
    head = add_last(head, 40);
    head = add_last(head, 20);
    // Prints 10 -> 40 -> 20 -> X
    print_list(head);

    head = delete_data(head, 20);
    head = delete_data(head, 40);
    head = delete_data(head, 10);
    // Prints X
    print_list(head);
    */
    
    struct node *first = add_last(NULL, 10);
    first = add_last(first, 40);
    first = add_last(first, 20);

    struct node *second = add_last(NULL, 50);
    second = add_last(second, 12);

    struct node *third = list_append(first, second);

    first = add_last(first, 13);
    second = add_last(second, 15);

    print_list(first);
    print_list(second);
    print_list(third);

    return 0;
}

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = new_node(data);

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *delete_data(struct node *head, int data) {
    // Case 1: Empty list (head == NULL) 
    if (head == NULL) {
        return head;
    }

    // Case 2: List only has one node
    if (head->next == NULL) {
        // if (head->data == data) {
        //     free(head);
        //     head = NULL;
        // }
        // return head;
        if (head->data == data) {
            free(head);
            return NULL;
        } else {
            return head;
        }
    }

    // Case 3: List has more than one node
    struct node *prev = NULL;
    struct node *curr = head;
    int found = 0;
    while (curr != NULL && found == 0) {
        if (curr->data == data) {
            found = 1;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }

    if (found == 0) {
        return head;
    }

    // prev at NULL
    // curr at 10
    // 10 -> 40 -> 20 -> X
    // 40 -> 20 -> X
    if (prev != NULL) {
        prev->next = curr->next;
    } else {
        head = curr->next;
    }
    free(curr);

    return head;
}

struct node *copy(struct node *list) {
    struct node *curr = list;
    struct node *new = NULL;
    while (curr != NULL) {
        new = add_last(new, curr->data);
        curr = curr->next;
    }

    return new;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    struct node *first_copy = copy(first_list);
    struct node *second_copy = copy(second_list);

    struct node *end_first = last_node(first_copy);
    end_first->next = second_copy;

    return first_copy;
}

int identical(struct node *first_list, struct node *second_list) {
    return 5841;
}

struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    return NULL;
}

/** HELPER FUNCTIONS **/

// `new_node` creates a new node with the given data and returns it.
//
// `new_node` takes in the data to create a new node with.
//
// `new_node` returns a pointer to the new node.
struct node *new_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    return new;
}

// `last_node` gets the last node in a linked list of nodes.
//
// `last_node` takes in the head of a linked list of nodes.
//
// `last_node` returns a pointer to the last node in the linked list.
struct node *last_node(struct node *head) {
    if (head == NULL) {
        return head;
    }

    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    // curr->next = NULL

    return curr;
}