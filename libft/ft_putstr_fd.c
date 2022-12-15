#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_putstr_fd() function outputs the string ’s’ to the given file
**	descriptor.
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
	{
		while (*s != '\0')
		{
			write(fd, s, 1);
			s++;
		}		
	}
}
