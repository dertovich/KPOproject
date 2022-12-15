#include "libft.h"

/*
** LIBRARY: <stdio.h>
** DESCRIPTION:
**		The ft_putchar()  writes the string s to stream, without its terminating 
**	null byte.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
