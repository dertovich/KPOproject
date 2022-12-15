#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
** 		The isalnum() function tests if a character c is alphabetical or numerical.
**	That is, if it's in the range 48-57, 65-90 or 97-122 at ASCII table.
*/

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
