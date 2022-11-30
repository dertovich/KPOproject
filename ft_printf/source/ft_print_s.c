#include "ft_printf.h"

int	ft_print_s(t_print t, va_list args)
{
	char	*str;
	int		count;
	int		flag;

	count = 0;
	flag = 0;
	str = va_arg(args, char *);
	if (!str)
	{
		str = malloc(sizeof(char) * 7);
		flag = 1;
		ft_strlcpy(str, "(null)", 7);
	}
	if (!t.point || t.prec > (int)ft_strlen(str) || t.prec < 0)
		t.prec = ft_strlen(str);
	if (!t.minus && t.width > t.prec && t.zero && (!t.point || t.neg_prec))
		count += ft_putnchar_fd('0', 1, t.width - t.prec);
	else if (!t.minus && t.width - t.prec > 0)
		count += ft_putnchar_fd(' ', 1, t.width - t.prec);
	count += ft_putnstr_fd(str, 1, t.prec);
	if (t.minus && t.width - t.prec > 0)
		count += ft_putnchar_fd(' ', 1, t.width - t.prec);
	if (flag)
		free(str);
	return (count);
}
