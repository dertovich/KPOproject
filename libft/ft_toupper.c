#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
** 		The toupper() function converts lowercase letters to uppercase.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
