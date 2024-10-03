#include "ft_list.h"

void    ft_list_push_front(t_list **begin_list, void *data)
{
    if (!begin_list)
        *begin_list=ft_create_elem(void *data);
    t_list *firstele=ft_create_elem(void *data);
    firstele->next=*begin_list;
    *begin_list=firstelem;
}