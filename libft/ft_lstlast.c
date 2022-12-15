#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_lstlast() function returns the last element of the list.
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (0);
	last = lst;
	while (last->next != NULL)
		last = last->next;
	return (last);
}
