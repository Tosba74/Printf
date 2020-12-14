/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:03:02 by bmangin           #+#    #+#             */
/*   Updated: 2020/12/14 20:19:05 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_isflags(char c)
{
	char *flags;

	flags = "cspdiuxX%";
	while (*flags)
	{
		if (*flags == c)
			return (1);
		flags++;
	}
	return (0);
}
int		ft_check_flags(char format, char c, va_list ap)
{
	if (format == '%' && c == 'c')
		return (ft_putchar(va_arg(ap, char)));
	if (format == '%' && c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (format == '%' && (c == 'd' || c == 'i'))
		return (ft_putnbr(va_arg(ap, int)));
	if (format == '%' && (c == 'u'))
		return (ft_putnbr(va_arg(ap, unsigned int)));
	if (format == '%' && (c == 'x'))
		return (ft_putnbr_base_x(va_arg(ap, int), "0123456789abcdef"));
	if (format == '%' && (c == 'X'))
		return (ft_putnbr_base_x(va_arg(ap, int), "0123456789ABCDEF"));
	/*
	if (format == '%' && (c == 'p'))
		ft_putnbr((int)va_arg(int, arg));
	if (format == '%' && (c == '%'))
		ft_putnbr((int)va_arg(int, arg));
	*/
	return (0);
}

int		ft_print_format(const char *format, va_list ap)
{
	int		i;

	i = -1;
	while (format[++i])
	{
		if (format[i] == '%' && (ft_isflags(format[i + 1])) != 0)
		{
			ft_check_flags(format[i], format[i + 1], ap);
			i++;
		}
		else
			ft_putchar(format[i]);
	}
	return (0);
}
