#include "ft_list.h"

int checksamplecases(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
    t_list *n=*begin_list1;
    t_list *m=begin_list2;
    if (!(*begin_list1) && !begin_list2)
        return 1;
    if ((*begin_list1) && !begin_list2)
        return 1;
    if (!(*begin_list1) && begin_list2)
    {
        *begin_list1=begin_list2;
        return 1;
    }
    while(n->next)
        n=n->next;
    while(m->next)
        m=m->next;
    if((*cmp)((*begin_list1)->data, m->data)>=0)
    {
        m->next=*begin_list1;
        *begin_list1=begin_list2;
        return 1;
    }
    if((*cmp)((begin_list2)->data, n->data)>=0)
    {
        n->next=begin_list2;
        return 1;
    }
    return 0;
}

void ft_sorted_list_insert(t_list **begin_list, t_list *m, int (*cmp)())
{
    t_list *n;
    t_list *p=NULL;

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
        p->next=m;
        m->next=NULL;
    }
}

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
    t_list *m=begin_list2;
    t_list *q;
    if (checksamplecases(begin_list1,begin_list2,cmp))
        return;
    while(m){
        q=m->next;
        ft_sorted_list_insert(begin_list,m,cmp);
        m=q;
    }
}