#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**		The ft_swap() function swaps the value of two integers.
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
