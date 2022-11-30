#include "ft_printf.h"

t_print	ft_init_tab(void)
{
	t_print	tab;

	tab.width = 0;
	tab.neg_prec = 0;
	tab.prec = 0;
	tab.spec = 0;
	tab.point = 0;
	tab.space = 0;
	tab.zero = 0;
	tab.sharp = 0;
	tab.minus = 0;
	tab.plus = 0;
	return (tab);
}
