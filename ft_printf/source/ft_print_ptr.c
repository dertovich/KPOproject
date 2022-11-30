#include "ft_printf.h"

static int	ft_nbrlen(unsigned long n, int base, t_print	t)
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
	len *= !(!n && !t.prec && t.point);
	return (len);
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

int	ft_print_ptr(t_print t, va_list args)
{
	int		count;
	size_t	n;
	int		len;

	count = 0;
	n = va_arg(args, size_t);
	if (n == 0 && t.prec)
		return (count = write(1, "0x0", 3));
	len = ft_nbrlen(n, 16, t);
	if (t.prec < len || !t.point)
		t.prec = len;
	count += write(1, "0x", 2 * t.zero);
	t.width -= 2;
	if (!t.minus && t.width > t.prec && !t.point && t.zero)
		count += ft_putnchar_fd('0', 1, (t.width - t.prec));
	else if (!t.minus && t.width > t.prec)
		count += ft_putnchar_fd(' ', 1, (t.width - t.prec));
	count += write(1, "0x", 2 * !t.zero);
	count += ft_putnchar_fd('0', 1, (t.prec - len) * (n != 0));
	count += ft_putnchar_fd('0', 1, t.prec * (t.point && n));
	if (len)
		count += ft_recursive_hex(t, n, n);
	if (t.minus && t.width > t.prec)
		count += ft_putnchar_fd(' ', 1, t.width - t.prec);
	return (count);
}
