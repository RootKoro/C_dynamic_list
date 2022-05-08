/*
** ETNA PROJECT, $2022
** $my_find_node
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

linked_list_t *my_find_node(linked_list_t *list, const int data_ref);

linked_list_t *my_find_node(linked_list_t *list, const int data_ref)
{
    if (list == NULL)
        return NULL;
    else if (list->data == data_ref)
        return list;
    return (my_find_node(list->next, data_ref));
}