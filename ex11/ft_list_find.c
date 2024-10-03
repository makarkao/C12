#include "ft_list.h"

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    t_list *n = begin_list;
    while(n)
    {
        if((*cmp)(n->data, data_ref)==0)
            return n;
        n=n->next;
    }
    return NULL;
}