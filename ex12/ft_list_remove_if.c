#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list *n = *begin_list;
    t_list *q;
    t_list *p=NULL;

    while(n)
    {
        q=n->next;
        if((*cmp)(n->data, data_ref)==0)
        {
            (*free_fct)(n->data);
            free(n);
            if (p)
                p->next=q;
            else
                *begin_list=q;
        }
        else
            p=n;
        n=q;
    }
}

/*example from github*/
// void	ft_list_remove_if(t_list **begin_list, void *data_ref,int (*cmp)(), void (*free_fct)(void *))
// {
// 	t_list	*n;
// 	t_list	*p;

// 	n = *begin_list;
// 	p = NULL;
// 	while (n)
// 	{
// 		if (cmp(n->data, data_ref) == 0)
// 		{
// 			if (p)
// 				p->next = n->next;
// 			else
// 				*begin_list = n->next;
// 			my_free(n, free_fct);
// 			if (p)
// 				n = p->next;
// 			else
// 				n = *begin_list;
// 		}
// 		else
// 		{
// 			p = n;
// 			n = n->next;
// 		}
// 	}
// }