#include "ft_printf.h"

int	ft_print_c(t_print tab, va_list args)
{
	char	c;
	int		count;
	int		a;

	count = 0;
	if (tab.spec == 'c')
		c = va_arg(args, int);
	else
		c = '%';
	tab.prec = 1;
	a = tab.width - tab.prec;
	if (!tab.minus && tab.zero)
		count += ft_putnchar_fd('0', 1, a);
	if (!tab.minus && tab.width > tab.prec)
		count += ft_putnchar_fd(' ', 1, a);
	count += ft_putchar_fd(c, 1);
	if (tab.minus && tab.width - tab.prec > 0)
		count += ft_putnchar_fd(' ', 1, a);
	return (count);
}
