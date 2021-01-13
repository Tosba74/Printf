/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:03:02 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/13 12:09:37 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_check_flags(char format, t_flags *flags, va_list ap)
{
	//ft_putstr("PUT(av_arg)\n");
	//ft_prints(flags);
	if (format == 'c')
		return (ft_putchar_len((char)va_arg(ap, int)));
	if (format == 's')
		return (ft_print_str(va_arg(ap, char *), *flags));
	if (format == 'd' || format == 'i')
		return (ft_print_num(va_arg(ap, int), *flags));
	/*
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
	return (0);
}

int		ft_print_format(const char *format, va_list ap)
{
	t_flags		*flags;
	flags = ft_init_struct(flags);
	format++;
	while (ft_isconvert(*format) == -1)
	{
		//ft_putstr("\n------------\n");
		//ft_putstr("ahah == ");
		//ft_putchar((char)*format);
		//ft_putstr("\n------------\n");
		if (ft_isalnum(*format))
		{
			if (*format == '0')
				flags->zero = 1;
			if (*format != '0' && flags->pres > 0)
				flags->pres = ft_atoi(format);
			if (*format != '0' && flags->size == -1)
				flags->size = ft_atoi(format);
			while (ft_isalnum(*format))
				format++;
		}
		if (ft_isflags(*format))
		{
			ft_init_flags(*format, flags);
			if (flags->star == 1)
			{
				if (flags->pres == 0)
					flags->size = (int)va_arg(ap, int);
				else
					flags->pres = (int)va_arg(ap, int);
			}
		}
	format++;
	}
	//ft_putstr("x><><x><><x\n");
	//ft_prints(flags);
	//ft_putstr("x><><x><><x\n");
	return (ft_check_flags(*format, flags, ap));
}
