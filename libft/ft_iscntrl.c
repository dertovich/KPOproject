#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
**		The isnotprint() function tests if a character c is NOT printable 
**	according to ASCII table. Also called control character.
*/

int	ft_iscntrl(int c)
{
	if ((c >= 0 && c <= 31) || c == 127)
		return (1);
	return (0);
}
