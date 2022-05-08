/*
** ETNA PROJECT, $2022
** $my_delete_nodes
** File description:
** 		Made by gueye_d
*/
#include <stdlib.h>
// #include "include/my_list.h"

typedef struct linked_list
{
    int data;
    struct linked_list *next;
} linked_list_t;

void my_delete_nodes(linked_list_t *list, const int data_ref);

void my_delete_nodes(linked_list_t *list, const int data_ref)
{
    if (list != NULL) {
        linked_list_t *tmp = list;
        if(tmp->data == data_ref) {
            list = tmp->next;
            free(tmp);
        } else
            my_delete_nodes(list->next, data_ref);
    }
}