#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list *newelem = (t_list *)malloc(sizeof(t_list));
    if(!newelem)
        return NULL;
    newelem->data=data;
    newelem->next=NULL;
    return (newelem);
}


====

// Online C compiler to run C program online
/*#include <stdio.h>

void sortint(int *str,int size)
{
    int i=0;
    int j;
    int s;
    int k=0;
    while(i<size-k)
    {
        j=i;
        while(j<size-1-k)
        {
            if(str[j]>=str[j+1])
            {
                s=str[j];
                str[j]=str[j+1];
                str[j+1]=s;
            }
            j++;
        }
        k++;
    }
}

int main() {
    int str[5]={3,8,4,1,2};
    sortint(str,5);
    int i=0;
    while(i<5)
    {
        printf("%d\n",str[i]);
        i++;
    }
    return 0;
}*/
/*
int add(int p, int q) //p=5 , q=5, add=
{
    int c;// a=5 , b=5, add= , c
    c=a+b;//a=5 , b=5, add= , c=10,
    return c;//a=5 , b=5, add=10 , c=10,
}

char *srrever(char *str)
{

}

int main ()
{
    char *str="hello";
    char *p=srrever(str);


}
*/