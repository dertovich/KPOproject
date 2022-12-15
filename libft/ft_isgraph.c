#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
** 		 The isgraph() function checks for any printable character except space.
*/

int	ft_isgraph(int c)
{
	if (c > 32 && c <= 126)
		return (1);
	return (0);
}
