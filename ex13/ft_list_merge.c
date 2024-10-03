#include "ft_list.h"

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *n=*begin_list1;
    if(!n)
        *begin_list1=begin_list2;
    else{
        while(n->next)
            n=n->next;
        n->next=begin_list2;
    }
}