#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_putnbr() function outputs the integer ’n’ to the standard output.
*/

void	ft_putnbr(int n)
{
	if (n >= 0 && n < 10)
	{
		ft_putchar((n + '0'));
	}
	else if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else
	{
		ft_putnbr((n / 10));
		ft_putnbr((n % 10));
	}
}
