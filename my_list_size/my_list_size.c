/*
** ETNA PROJECT, $2022
** $my_list_size
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

int my_list_size (const linked_list_t *list);

int my_list_size (const linked_list_t *list)
{
    if (list == NULL)
        return 0;
    return (my_list_size(list->next) + 1);
}