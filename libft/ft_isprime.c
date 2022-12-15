#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_isprime() function return 1 if a number is prime and 0 if is not.
*/

int	ft_isprime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb && i <= 47000)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
