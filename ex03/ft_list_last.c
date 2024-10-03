#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
    t_list *n=begin_list;
    while(n)
    {
        if(!(n->next))
            return n;
        n=n->next;
    }
    return n;
}