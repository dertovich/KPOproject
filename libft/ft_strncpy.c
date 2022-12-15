#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**		The strncpy() function copies n bytes (at most) of src to dest.
**		It returns a pointer to the destination string dest.
*/

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
