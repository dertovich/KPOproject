#include "ft_printf.h"

static int	ft_nbrlen(long n, int base)
{
	int	len;

	len = 0;
	if (!base)
		base = 10;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= base;
	}
	return (len);
}

static char	*ft_sharp(t_print tab)
{
	if (tab.spec == 'X')
		return ("0X");
	return ("0x");
}

static int	ft_recursive_hex(t_print tab, size_t n, size_t iteration)
{
	int		count;
	int		remainder;
	char	character;

	count = 0;
	if (n > 0 || (!iteration && (tab.spec != 'p' || !tab.point)))
	{
		remainder = n % 16;
		if (tab.spec != 'X')
			character = LOWHEX[remainder];
		else
			character = UPHEX[remainder];
		n /= 16;
		iteration = 1;
		count += ft_recursive_hex(tab, n, iteration);
		count += ft_putchar_fd(character, 1);
	}
	return (count);
}

int	ft_print_hex(t_print	t, va_list args)
{
	int				count;
	unsigned int	n;
	int				len;

	count = 0;
	n = va_arg(args, unsigned int);
	len = ft_nbrlen(n, 16);
	if (!n && !t.prec && t.point)
		len = 0;
	if (t.prec < 0 || t.prec < len || !t.point)
		t.prec = len;
	if (t.sharp && n)
		t.width -= 2;
	count += ft_putnstr_fd(ft_sharp(t), 1, 2 * (t.sharp && t.zero && n));
	if (!t.minus && t.width > t.prec && (!t.point || t.neg_prec) && t.zero)
		count += ft_putnchar_fd('0', 1, (t.width - t.prec));
	else if (!t.minus && t.width > t.prec)
		count += ft_putnchar_fd(' ', 1, (t.width - t.prec));
	count += ft_putnstr_fd(ft_sharp(t), 1, 2 * (t.sharp && !t.zero && n));
	count += ft_putnchar_fd('0', 1, (t.prec - len));
	if (len)
		count += ft_recursive_hex(t, n, n);
	if (t.minus && t.width > t.prec)
		count += ft_putnchar_fd(' ', 1, t.width - t.prec);
	return (count);
}
