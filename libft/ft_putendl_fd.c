#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_putendl_fd() function outputs the string ’s’ to the given file
**	descriptor, followed by a newline.
*/

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		while (*s != '\0')
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, "\n", 1);
	}
}
