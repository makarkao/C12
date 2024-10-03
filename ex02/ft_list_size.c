#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    t_list *n=begin_list;
    int i=0;
    while(n)
    {
        i++;
        n=n->next;
    }
    return i;
}