#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_utoa_base() function 
*/

char	*ft_strrev(char *str)
{
	size_t	size;
	size_t	i;
	char	aux;

	size = ft_strlen(str);
	str[size + 1] = '\0';
	size--;
	i = 0;
	while (i < size)
	{
		aux = str[i];
		str[i] = str[size];
		str[size] = aux;
		i++;
		size--;
	}
	return (str);
}
