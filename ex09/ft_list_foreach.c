#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *n = begin_list;
    while(n)
    {
        (*f)(n->data);//f(n->data);
        n=n->next;
    }
}