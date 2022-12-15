#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_putendl() function outputs the string ’s’ to the standard output, 
**	followed by a newline.
*/

void	ft_putendl(char *s)
{
	if (s != NULL)
	{
		while (*s != '\0')
		{
			write(1, s, 1);
			s++;
		}
		write(1, "\n", 1);
	}
}
