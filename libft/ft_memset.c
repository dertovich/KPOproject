#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**		The memset() function fills the first len bytes of the memory area pointed 
**	to by b with the constant byte c.
**		It returns a pointer to the memory area b.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
