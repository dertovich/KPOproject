#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**		The strlcpy() function copies up to size - 1 characters from the NUL-
**	terminated string src to dst, NUL-terminating the result.
**		It returns the total length of src. 
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sz_src;

	if (!dst || !src)
		return (0);
	i = 0;
	sz_src = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (sz_src);
}
