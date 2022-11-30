#include "ft_printf.h"

static t_print	ft_parse_width(char *fmt, t_print tab)
{
	int	specif;

	specif = 0;
	while (*fmt != '.' && !ft_strchr("cspdiuxX%", *fmt))
	{
		if (*fmt == '-')
			tab.minus = 1;
		if (*fmt == '0' && !ft_isdigit(*(fmt - 1)))
			tab.zero = 1;
		else if (*fmt > '0' && *fmt <= '9' && !specif)
		{
			tab.width = ft_atoi(fmt);
			specif = 1;
		}
		fmt++;
	}	
	return (tab);
}

static t_print	ft_parse_sspflags(char *format, t_print tab)
{
	while (*format != '.' && !ft_strchr("cspdiuxX%", *format))
	{
		if (*format == '+')
			tab.plus = 1;
		if (*format == ' ')
			tab.space = 1;
		if (*format == '#')
			tab.sharp = 1;
		format++;
	}
	return (tab);
}

static t_print	ft_parse_precision(char *format, t_print tab)
{
	int	specified;

	specified = 0;
	while (!ft_strchr("cspdiuxX%", *format))
	{
		if (ft_isdigit(*format) && !specified)
		{
			tab.prec = ft_atoi(format);
			specified = 1;
		}
		format++;
	}
	return (tab);
}

static int	ft_print_format(t_print tab, va_list args)
{
	int	count;

	count = 0;
	if (tab.spec == 'c' || tab.spec == '%')
		count = ft_print_c(tab, args);
	if (tab.spec == 's')
		count = ft_print_s(tab, args);
	if (tab.spec == 'd' || tab.spec == 'i' || tab.spec == 'u')
		count = ft_print_d_i_u(tab, args);
	if (tab.spec == 'X' || tab.spec == 'x')
		count = ft_print_hex(tab, args);
	if (tab.spec == 'p')
		count = ft_print_ptr(tab, args);
	return (count);
}

int	ft_parse(char	*format, va_list	args)
{
	t_print	tab;

	tab = ft_parse_width(format, ft_init_tab());
	tab = ft_parse_sspflags(format, tab);
	while (!ft_strchr("cspdiuxX%", *format) && *format != '.')
		format++;
	if (*format == '.' && !tab.spec)
	{
		tab.point = 1;
		tab = ft_parse_precision(format++, tab);
		while (!ft_strchr("cspdiuxX%", *format))
			format++;
	}
	if (tab.width < 0)
	{
		tab.minus = 1;
		tab.width *= -1;
	}
	tab.spec = *format;
	tab.neg_prec = tab.prec < 0;
	return (ft_print_format(tab, args));
}
