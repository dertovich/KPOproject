#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_putstr() function outputs the string ’s’ to the standard output.
*/

void	ft_putstr(char *s)
{
	if (s != NULL)
	{
		while (*s != '\0')
		{
			write(1, s, 1);
			s++;
		}		
	}
}
