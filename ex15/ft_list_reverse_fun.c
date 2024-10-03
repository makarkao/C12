#include "ft_list.h"

void ft_list_reverse_fun(t_list *begin_list){
    t_list *n=begin_list;
    t_list *n1=begin_list;
    int i=0;
    int k=0;
    int j=0;
    void *t;
    if(!(begin_list))
        return;
    while(n)
    {
        i++;
        n=n->next;
    }
    
    while(k<i-1)
    {
        j=0;
        n=begin_list;
        while(j<i-1-k)
        {
            if(j==i-2-k)
            {
                t=n1->data;
                n1->data=n->next->data;
                n->next->data=t;
            }
            j++;
            n=n->next;
        }
        n1=n1->next;
        k++;
    }
}

void ft_list_reverse_fun2(t_list *begin_list){
    t_list *n=begin_list;
    int i=0;
    int k=0;
    int j=0;
    void *t;
    if(!(begin_list))
        return;
    while(n)
    {
        i++;
        n=n->next;
    }
    
    while(k<i-1)
    {
        j=0;
        n=begin_list;
        while(j<i-1-k)
        {
            t=n->data;
            n->data=n->next->data;
            n->next->data=t;
            j++;
            n=n->next;
        }
        k++;
    }
}