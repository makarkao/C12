#include "ft_list.h"

t_list *ft_list_push_strs(int size, char **strs)
{
    if (size>=1)
    {
        int i=size-1;
        t_list *n=ft_create_elem(strs[i]);
        t_list *n1=n;
        i--;
        while(i>=0)
        {
            n->next=t_create_elem(strs[i]);
            n=n->next;
            i--;
        }
        return n1;
    }
    return NULL;
}