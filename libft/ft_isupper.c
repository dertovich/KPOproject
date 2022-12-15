#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
** 		 The isupper() function tests if c is a upper-case letter.
*/

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
