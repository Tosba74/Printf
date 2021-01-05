/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:03:02 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/05 19:20:15 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_check_flags(char format, char c, va_list ap)
{
	ft_print_num(format);
	/*
	if (format == '%' && c == 'c')
		return (ft_putchar((char)va_arg(ap, int)));
	if (format == '%' && c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (format == '%' && (c == 'd' || c == 'i'))
		return (ft_itoa_len(va_arg(ap, int)));
	if (format == '%' && (c == 'u'))
		return (ft_itoa_len(va_arg(ap, unsigned int)));
	if (format == '%' && (c == 'x'))
		return (ft_putnbr_base_x(va_arg(ap, int), "0123456789abcdef"));
	if (format == '%' && (c == 'X'))
		return (ft_putnbr_base_x(va_arg(ap, int), "0123456789ABCDEF"));
	if (format == '%' && (c == 'p'))
		ft_putnbr((int)va_arg(int, arg));
	if (format == '%' && (c == '%'))
		ft_putnbr((int)va_arg(int, arg));
	*/
	return (0);
}

void	ft_init_flags(char format, t_flag flag)
{
	if (ft_isflags(format) == 0)
		flag.minus = 1;
	if (ft_isflags(format) == 1)
		flag.zero = 1;
	if (ft_isflags(format) == 2)
		flag.neg = 1;
	if (ft_isflags(format) == 3)
		flag.pres = 1;
	if (ft_isflags(format) == 4)
		flag.star = 1;
}

int		ft_print_format(const char *format, va_list ap)
{
	t_flag		flag;
	format++;
	while (ft_isconvert(*format))
	{
		if (ft_isalnum(*format) > 0)
			flag.size = ft_atoi(format);
		else if (ft_isflags(*format))
			ft_init_flags(*format, flag);
		format++;
	}
}