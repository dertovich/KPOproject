#include "libft.h"

void	*ft_memset(void	*b, int c, size_t	len)
{
	size_t	count;
	char	*ptr;

	count = 0;
	ptr = (char *)b;
	while (count < len)
	{
		*ptr = (unsigned char)c;
		ptr++;
		count++;
	}
	return (b);
}
