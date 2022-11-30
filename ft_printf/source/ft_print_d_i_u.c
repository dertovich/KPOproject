#include "ft_printf.h"

static char	sign(t_print tab)
{
	if (tab.plus)
		return ('+');
	return ('-');
}

static int	ft_print_nbr(t_print t, char *nbr, int len, int neg)
{
	int	c;

	c = 0;
	t.width -= (t.space && !neg && !t.plus && t.width);
	if (neg || t.plus)
		c += ft_putnchar_fd(sign(t), 1, t.zero && (!t.point || t.neg_prec));
	else if (t.space && !ft_strncmp(nbr, "-2147483648", 12))
		c += ft_putnchar_fd(' ', 1, t.zero && !t.point);
	if (!t.minus && t.width > t.prec && (!t.point || t.neg_prec) && t.zero)
		c += ft_putnchar_fd('0', 1, t.width - t.prec - neg - t.plus);
	else if (!t.minus && t.width > t.prec)
		c += ft_putnchar_fd(' ', 1, t.width - t.prec - neg - t.plus);
	if (neg || t.plus)
		c += ft_putnchar_fd(sign(t), 1, !t.zero || (t.point && !t.neg_prec));
	else if (t.space && ft_strncmp(nbr, "-2147483648", 12))
		c += ft_putnchar_fd(' ', 1, !t.zero || t.point);
	c += ft_putnchar_fd('0', 1, t.prec - len);
	c += write(1, nbr, len);
	if (t.minus && t.width > t.prec)
		c += ft_putnchar_fd(' ', 1, t.width - t.prec - neg - t.plus);
	return (c);
}

int	ft_print_d_i_u(t_print tab, va_list args)
{
	char	*nbr;
	int		n;
	int		c;
	int		len;
	int		neg;

	c = 0;
	n = va_arg(args, int);
	neg = (n < 0 && n > -2147483648 && tab.spec != 'u');
	if (n < 0 && tab.spec != 'u')
		n *= -1;
	if (n < 0 && tab.spec == 'u')
		nbr = ft_unsigned_itoa((unsigned)n);
	else
		nbr = ft_itoa(n);
	if (neg || !ft_strncmp(nbr, "-2147483648", 12))
		tab.plus = 0;
	len = ft_strlen(nbr);
	if (*nbr == '0' && !tab.prec && tab.point)
		len = 0;
	if (tab.prec < len || !tab.point)
		tab.prec = len;
	c += ft_print_nbr(tab, nbr, len, neg);
	free(nbr);
	return (c);
}
