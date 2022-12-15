#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**		The memcpy() function copies n bytes from memory area src to memory area 
**	dst. The memory areas must not overlap.
**		It returns a pointer to dst.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
