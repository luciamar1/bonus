#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
    t_list *new;
    while (lst)
    {
        if(!f(lst))
        {
            del(lst->content);
            free(content);
            return(NULL);
        }
        ft_lstadd_back(&new, f(lst));
        lst = lst->next;
    }
        return(new);
    }  
}