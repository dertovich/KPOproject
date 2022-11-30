#include "libft.h"

int	ft_putstr_fd(char	*s, int fd)
{
	int	a;

	a = 0;
	if (s)
		a = write(fd, s, ft_strlen(s));
	return (a);
}
