/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:03:02 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/06 19:03:49 by bmangin          ###   ########lyon.fr   */
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

int		ft_print_format(const char *format, va_list ap)
{
	t_flags		*flags;
	ft_putstr("-0-\n");
	ft_putstr("-1-\n");
	ft_putstr("-2-\n");
	format++;
	while (ft_isconvert(*format) < 0)
	{
		ft_putchar('0');
		ft_init_struct(flags);
	ft_print_struct(flags);
		if (ft_isalnum(*format) > 0)
		{
			ft_putstr("ERROR\n");
			flags->size = ft_atoi(format);
		}
		else if (ft_isflags(*format))
		{
			ft_putstr("ERROR\n");
			ft_init_flags(*format, flags);
		}
		else if (ft_isflags(*format))
			ft_putstr("ïsflags");
		format++;
	}
	return (0);
}
