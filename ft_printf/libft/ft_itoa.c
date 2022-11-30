#include "libft.h"

static int	ft_nbrlen(long n, int base)
{
	int	len;

	len = 0;
	if (!base)
		base = 10;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		len++;
		n /= base;
	}
	return (len);
}

static char	*ft_fill_str(char *str, int len, int n, int n_bak)
{
	str[len] = '\0';
	while (len-- > 0)
	{
		if (len > 0 || n_bak >= 0)
			str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

static char	*ft_allocate_str(char *str, int len, int n, int n_bak)
{
	if (n >= 0)
		str = ft_calloc(sizeof(char), (size_t)(len + 1));
	else if (n < 0 && n > -2147483648)
	{
		len++;
		str = ft_calloc(sizeof(char), (size_t)(len + 1));
		str[0] = '-';
		n *= -1;
	}
	else
	{
		str = ft_calloc(sizeof(char), 12);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	return (ft_fill_str(str, len, n, n_bak));
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		n_bak;
	long	long_n;

	n_bak = n;
	long_n = (long)n;
	len = ft_nbrlen(long_n, 10);
	str = NULL;
	str = ft_allocate_str(str, len, n, n_bak);
	if (str == NULL)
		return (NULL);
	return (str);
}
