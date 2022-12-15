#include "libft.h"

/*
** LIBRARY: <math.h>
** DESCRIPTION:
**		The ft_pow() function returns the value of a power applied to a number. 
**	An power lower than 0, returns 0.
*/

int	ft_pow(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (nb == 1 || power == 0)
		return (1);
	else
		result = result * ft_pow(nb, power - 1);
	return (result);
}
