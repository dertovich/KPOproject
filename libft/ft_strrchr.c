#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**		The strrchr() function returns a pointer to the last occurrence of the 
**	character c in the string s.
**		It return a pointer to the matched character or NULL if the character is 
**	not found. The terminating null byte is considered part of the string, so 
**	that if c is specified as '\0', these functions return a pointer to the 
**	terminator.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = 0;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			ptr = (char *)s;
		s++;
	}
	if (*s == '\0' && (unsigned char)c == '\0')
		return ((char *)s);
	return (ptr);
}
