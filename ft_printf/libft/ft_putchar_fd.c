#include "libft.h"

int	ft_putchar_fd(char c, int fd)
{
	int	a;

	a = write(fd, &c, 1);
	return (a);
}
