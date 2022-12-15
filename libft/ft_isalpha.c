#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
** 		The isalpha() function tests if character c is a alphabetic.
**	That is, if it's between 65-90 or 97-122 at ASCII.
*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
