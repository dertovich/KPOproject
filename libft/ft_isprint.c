#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
** 		The isprint() function tests if a character c is printable according to 
**	ASCII table, including space. That is, between 32-126 at ASCII, inclusive.
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
