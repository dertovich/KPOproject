/* ************************************************************************** */
#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_putlnbr() function outputs the unsigned integer ’n’ to the 
**	standard output.
*/

void	ft_putlnbr(long long int n)
{		
	if (n >= 0 && n < 10)
		ft_putchar((n + '0'));
	else if (n < -9223372036854775807)
		ft_putstr("-9223372036854775808");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putlnbr(-n);
	}
	else
	{
		ft_putlnbr((n / 10));
		ft_putlnbr((n % 10));
	}
}
