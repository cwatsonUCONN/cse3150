#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

struct node {
    node * next;
    node * jumper;
    int data;
}

struct node * build_linked_list(int);
void print_linked_list(struct node *, int);
void print_linked_list_by_jumpers(struct node *, int);
void double_jumpers(struct node *, int);
int delete_linked_list(struct node *, int);

#endif