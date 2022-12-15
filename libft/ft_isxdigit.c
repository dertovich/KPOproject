#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
**		The isxdigit() function checks for a hexadecimal digits, that is, one of
**	0 1 2 3 4 5 6 7 8 9 a b c d e f A B C D E F.
*/

int	ft_isxdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')
		|| (c >= 'a' && c <= 'f'))
		return (1);
	return (0);
}
