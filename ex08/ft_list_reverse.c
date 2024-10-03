#include "ft_list.h"

void ft_list_reverse(t_list **begin_list)
{
    t_list *p;
    t_list *q;
    t_list *n=*begin_list;
    t_list *m=n->next;
    
    n->next=NULL;
    while(m)
    {
        p=m->next;
        q=m;
        m->next = n;
        n=q;
        m=p;
    }
    *begin_list=n;
}