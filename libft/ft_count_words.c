#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_count_words() counts how many words has a string.
*/

size_t	ft_count_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	if (*s != c && *s)
	{
		s++;
		words++;
	}
	while (*s != '\0')
	{
		while (*s == c && *(s + 1) != '\0')
		{
			s++;
			if (*s != c)
				words++;
		}
		s++;
	}
	return (words);
}
