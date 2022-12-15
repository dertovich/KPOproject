#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_lstsize() function counts the number of elements in a list.
*/

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
