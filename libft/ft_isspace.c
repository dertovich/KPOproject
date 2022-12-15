#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
** 		The isspace() function tests for white-space characters. That is:
**	form-feed ('\f'), newline ('\n'), carriage return ('\r'), horizontal tab 
**	('\t'), and vertical tab ('\v').
*/

int	ft_isspace(int c)
{
	if ((c == ' ' || c == '\r' || c == '\n' || c == '\f' || c == '\v'
			|| c == '\t'))
		return (1);
	return (0);
}
