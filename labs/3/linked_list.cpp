#include "linked_list.h"

struct node * build_linked_list(int num_nodes){
    struct * node linked_list = new node;
    struct * node root = linked_list;
    root->data = -1;

    for(int i = 0; i < num_nodes; i++){
        linked_list->next = new node;
        linked_list->data = i + 1;
        linked_list = linked_list->next;
    }

    return root;
}

void print_linked_list(struct node * first, int num_nodes){
    struct node * linked_list = first;

    for (int i = 0; i < num_nodes; i++){
        std::cout << linked_list->data;
        if (i != num_nodes -1)
            std::cout << " -> ";
    }

    std::cout << std::endl;
}

void print_linked_list_by_jumpers(struct node * first, int num_nodes){

}

void double_jumpers(struct node * first, int num_nodes){
    struct node * linked_list = first;

    for (int i = 0; i < num_nodes; i++){
        if (linked_list->jumper = linked_list) break;
        std::cout << linked_list->data;
        if (i != num_nodes -1)
            std::cout << " -> ";
    }

    std::cout << std::endl;
}

int delete_linked_list(struct node * first, int num_nodes){
    struct node * linked_list = first;
    struct node * lag_node = first;

    int num_deleted = 0;

    for (int i = 0; i < num_nodes; i++){
        linked_list = linked_list->next;
        delete lag_node;
        num_deleted++;
        lag_node = linked_list;
    }

    return num_deleted;
}