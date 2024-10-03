#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    unsigned int i=0;
    t_list *n=begin_list;
    while(n)
    {
        if(i==nbr)
            return n;
        i++;
        n=n->next;
    }
    return NULL;
}