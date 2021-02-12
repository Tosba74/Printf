/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:03:02 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/10 16:16:01 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_print_format(t_flags *flags)
{
	// ft_putstr("CONNARD!\n");
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
}

int		ft_init_format(t_flags *flags, const char *format)
{
	int i;

	i = 1;
	ft_init_flags(flags);
	ft_prints(flags);
	ft_putstr("PARSING SA MERE\n");
	i += ft_parse(flags, format + i);
	ft_prints(flags);
	// ft_converse((ft_isconvert(flags->spec))(flags, format);
	ft_print_format(flags);
	return (i);
}
