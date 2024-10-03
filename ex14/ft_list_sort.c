#include "ft_list.h"

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
    t_list *n=*begin_list;
    t_list *m;
   
    void *t;
    if(!(*begin_list))
        return;
    while(n)
    {
        m=n->next;
        while(m)
        {
            
            if ((*cmp)(n->data, m->data) > 0)
            {
                t=n->data;
                n->data=m->data;
                m->data=t;
            }
            
            m=m->next;
        }
        n=n->next;
    }
}