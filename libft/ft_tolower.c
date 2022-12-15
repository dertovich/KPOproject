#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
** 		The tolower() function converts uppercase letters to lowercase.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
