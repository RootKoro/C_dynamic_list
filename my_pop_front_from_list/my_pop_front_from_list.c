/*
** ETNA PROJECT, $2022
** $my_push_front_to_list
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

linked_list_t *my_pop_front_from_list(linked_list_t *list);

linked_list_t *my_pop_front_from_list(linked_list_t *list)
{
    list = list->next;
    return list;
}