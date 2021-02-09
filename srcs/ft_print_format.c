/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:03:02 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/09 17:44:46 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_print_format(t_flags *flags)
{
	// ft_putstr("CONNARD!\n");
	// ft_prints(flags);
	// ft_prints(flags);
	// ft_putstr("x><><x><><x\n");
	// if (format == 'c')
		// return (ft_putchar_len(flags));
	if (flags->spec == 's')
		flags->length += ft_print_str(*flags, (char*)va_arg(flags->ap, char*));
	/*
	if (format == 'd' || format == 'i')
		flags->length += ft_print_num(va_arg(flags->ap, int), *flags);
	if (format == 'u')
		return (ft_itoa_len(va_arg(ap, unsigned int)));
	if (format == 'x')
		return (ft_print_hex(va_arg(ap, int), "0123456789abcdef", *flags));
	if (format == 'X')
		return (ft_print_hex(va_arg(ap, int), "0123456789ABCDEF", *flags));
	if (format == 'p')
		ft_putnbr((int)va_arg(ap, int));
	if (format == '%')
		ft_putnbr((int)va_arg(ap, int));
	*/
	// ft_putnbr(flags->length);
	// ft_putchar('\n');
}

int		ft_parsing(t_flags *flags, const char *format)
{
	int		i;

	i = 0;
	if (format[i] == '-' || format[i] == '0')
	{
		if (format[i] == '-')
		{
			flags->rev = 1;
			// ft_putstr("-`'|");
			// ft_putnbr(flags->rev);
			// ft_putstr("|'/-\n");
		}
		if (format[i] == '0')
		{
			flags->zero = 1;
			// ft_putstr("-`'|");
			// ft_putnbr(flags->zero);
			// ft_putstr("|'/-\n");
		}
		while (format[i] == '-' && format[i] == '0')
			i++;
	}
	while (ft_isdigit(format[i]))
	{
		if (flags->size == -1)
			flags->size = ft_atoi(format + i);
		i++;
	}
	if (format[i] == '*')
	{
		flags->size = (int)va_arg(flags->ap, int);
		i++;
	}
	// ft_putstr("suis ");
	return (i);
}

int		ft_parsing_prec(t_flags *flags, const char *format)
{
	int		i;

	i = 0;
	i++;
	if (ft_isdigit(format[i]))
	{
		flags->prec = ft_atoi(format + i);
		while (ft_isdigit(format[i]))
			i++;
	}
	else if (format[i] == '*')
	{
		flags->prec = va_arg(flags->ap, int);
		i++;
	}
	// ft_putstr("LA! ");
	return (i);
}

int		ft_init_format(t_flags *flags, const char *format)
{
	int i;

	i = 0;
	while (ft_isconvert(format[i]) == -1)
	{
		// ft_putstr(" JE ");
		i += ft_parsing(flags, format);
		if (format[i] == '.')
			i += ft_parsing_prec(flags, format);
		if (ft_isconvert(format[i]) != -1)
			break ;
		i++;
		// ft_putchar('|');
		// ft_putnbr(i);
		// ft_putchar('|');
		// ft_putchar('\n');
	}
	flags->spec = format[i];
	// ft_prints(flags);
	ft_print_format(flags);
	return (i);
}
