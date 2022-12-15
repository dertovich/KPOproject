#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
** 		The ft_lstclear() function deletes and frees the given element and every 
**	successor of that element, using the function ’del’ and free(). Finally, 
**	the pointer to the list must be set to NULL.
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	curr = *lst;
	while (curr != NULL)
	{
		next = curr->next;
		ft_lstdelone(curr, del);
		curr = next;
	}
	*lst = NULL;
}
