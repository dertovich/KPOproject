#include "libft.h"

char	*ft_strndup(const char *s, size_t	n)
{
	size_t	len;
	char	*new_str;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if ((size_t)len > n)
		len = n;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s, len);
	new_str[len] = '\0';
	return (new_str);
}
