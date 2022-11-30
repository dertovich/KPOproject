#include "libft.h"

char	*ft_chjoin(char const	*s, char const c)
{
	char	*new_str;
	size_t	len;
	size_t	count;

	len = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * len + 2);
	if (!new_str)
		return (NULL);
	count = 0;
	while (s[count] != '\0')
	{
		new_str[count] = s[count];
		count++;
	}
	new_str[count] = c;
	count++;
	new_str[count] = '\0';
	return (new_str);
}
