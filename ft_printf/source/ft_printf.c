#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	char	*new_format;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			new_format = (char *)format;
			if (*(++format))
				len += ft_parse((char *)format, args);
			while (*format && !ft_strchr("cspdiuxX%", *format))
				format++;
			if (!(*format))
				format = new_format;
		}
		else
			len += ft_putchar_fd(*format, 1);
		if (*format)
			format++;
	}
	va_end(args);
	return (len);
}
