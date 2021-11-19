#include <assert.h>
#include <stdlib.h>

#include "list.h"

struct node *args_to_list(int argc, char *argv[]) {
    struct node *head = NULL;
    for (int i = argc - 1; i >= 1; i = i - 1) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = atoi(argv[i]);
        head = n;
    }
    return head;
}