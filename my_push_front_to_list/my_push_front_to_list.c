/*
** ETNA PROJECT, $2022
** $my_push_front_to_list
** File description:
** 		Made by gueye_d
*/
#include <stdlib.h>
// #include "my_list.h"

typedef struct linked_list
{
    int data;
    struct linked_list *next;
} linked_list_t;

linked_list_t *my_push_front_to_list (int value, linked_list_t *list);

linked_list_t *my_push_front_to_list (int value, linked_list_t *list) {
    linked_list_t *new = malloc (sizeof (list));
    new->data = value;
    new->next = list;
    return new;
}