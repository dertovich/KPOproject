#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
** 		The isdigit() function tests if a character c corresponds to a 
**	decimal digit character (48 to 57 at ASCII).
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
