#include "ft_list.h"

void    ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *n;
    t_list *n1=ft_create_elem(data);
    
    if(!(*begin_list))
        *begin_list=n1;
    n=*begin_list;
    while(n->next)
        n=n->next
    n->next=n1;
}