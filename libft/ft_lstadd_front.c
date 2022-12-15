#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
** 		The ft_lstadd_front() function adds the element ’new’ at the beginning 
**	of the list.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
