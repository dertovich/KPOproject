#include "libft.h"

int	ft_putnchar_fd(char c, int fd, int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		count += write(fd, &c, 1);
		n--;
	}
	return (count);
}
