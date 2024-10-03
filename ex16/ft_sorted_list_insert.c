#include "ft_list.h"

void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    t_list *n;
    t_list *p=NULL;
    t_list *m=ft_create_elem(data);

    if(!(*begin_list))
        *begin_list=m;
    else
    {
        n=*begin_list;
        while(n)
        {
            if((*cmp)(n->data,m->data)>=0)
            {
                m->next=n;
                if(p)
                    p->next=m;
                return;
            }
            p=n;
            n=n->next;
        }

    }
}