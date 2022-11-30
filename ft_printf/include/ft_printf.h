/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cahayley <cahayley@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:58:48 by cahayley          #+#    #+#             */
/*   Updated: 2022/01/11 13:58:53 by cahayley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_print
{
	int		width;
	int		neg_prec;
	int		prec;
	char	spec;
	int		point;
	int		space;
	int		zero;
	int		sharp;
	int		minus;
	int		plus;
}			t_print;

# define LOWHEX	"0123456789abcdef"
# define UPHEX	"0123456789ABCDEF"

int		ft_printf(const char *format, ...);
t_print	ft_init_tab(void);
int		ft_parse(char	*format, va_list	args);
int		ft_print_c(t_print	tab, va_list	args);
int		ft_print_s(t_print	tab, va_list	args);
int		ft_print_ptr(t_print	tab, va_list	args);
int		ft_print_d_i_u(t_print	tab, va_list	args);
int		ft_print_hex(t_print	tab, va_list	args);

#endif
