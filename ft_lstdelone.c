#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void
*)
{
    if (!lst || !lst->content || !del)
        return (NULL);  
    del(lst -> content);
    free (lst);
    lst = NULL;
}