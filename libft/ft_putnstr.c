#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_putstr() function outputs the string ’s’ to the standard output 
**	limited to n chars.
*/

void	ft_putnstr(char *s, int n)
{
	if (!s)
		ft_putnstr("(null)", n);
	else
	{
		while (*s && n > 0)
		{
			write(1, s, 1);
			s++;
			n--;
		}		
	}
}
