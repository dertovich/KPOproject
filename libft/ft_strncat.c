#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**		The strncat() function appends most of n bytes from src string to the 
**	dest string. Src does not need to be null-terminated if it contains n or 
**	more bytes.
**		It returns a pointer to the resulting string dest.
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
