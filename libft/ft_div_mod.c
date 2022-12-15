#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
** 		The ft_div_mod() function divides parameters a by b and stores the result
**	in the int pointed by div. It also stores the remainder of the division of 
**	a by b in the int pointed by mod.
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = (a / b);
		*mod = (a % b);
	}
}
