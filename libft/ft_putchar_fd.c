#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_putchar_fd() function outputs the character ācā to the given file
**	descriptor.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
