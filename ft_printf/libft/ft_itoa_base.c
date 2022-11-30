#include "libft.h"

static size_t	ft_countsize(unsigned long number, size_t len_base)
{
	if ((number / len_base) == 0)
		return (1);
	else
		return (1 + ft_countsize(number / len_base, len_base));
}

static void	ft_convbase(unsigned long number, char *num, char *base, size_t i)
{
	size_t	len_base;

	len_base = ft_strlen(base);
	if (number >= (unsigned long int)len_base)
		ft_convbase((number / len_base), num, base, (i - 1));
	num[i] = base[number % len_base];
}

char	*ft_itoa_base(unsigned long number, char *base)
{
	size_t		len_num;
	size_t		len_base;
	char		*num;

	len_base = ft_strlen(base);
	len_num = ft_countsize(number, len_base);
	num = (char *)malloc(sizeof(char) * len_num + 1);
	if (!num)
		return (NULL);
	num[len_num] = '\0';
	len_num--;
	ft_convbase(number, num, base, len_num);
	return (num);
}
