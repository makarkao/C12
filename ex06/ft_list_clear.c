#include "ft_list.h"

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    t_list *n=begin_list;
    t_list *nex;
    while(n)
    {
        nex=n->next;
        free_fct(n->data);
        free(n);
        n=nex;
    }
}