#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
** 		 The islower() function tests if c is a lower-case letter.
*/

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
