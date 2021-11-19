
#ifndef _LIST_H_
#define _LIST_H_

struct node {
    int data;
    struct node *next;
};

struct node *args_to_list(int argc, char *argv[]);

#endif // _LIST_H_
