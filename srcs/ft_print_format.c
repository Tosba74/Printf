/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:03:02 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/09 18:54:58 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_check_flags(char format, t_flags *flags, va_list ap)
{
	ft_putstr("PUT(av_arg)\n");
	ft_prints(flags);
	ft_print_num(format);
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
		return (ft_putnbr_base_x(va_arg(ap, int), "0123456789abcdef"));
	if (format == 'X')
		return (ft_putnbr_base_x(va_arg(ap, int), "0123456789ABCDEF"));
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
	while (ft_isconvert(++format) == -1)
	{
		if (ft_isalnum(*format))
		{
			if (*format == '0')
				flags->zero = 1;
			if (flags->pres == 1)
				flags->pres = ft_atoi(format);
			if (flags->size == -1)
				flags->size = ft_atoi(format);
			while (ft_isalnum(*format))
				format++;
			ft_putchar(*format);
			ft_prints(flags);
		}
		if (ft_isflags(*format))
		{
			ft_init_flags(*format, flags);
			if (flags->star == 1)
			{
				if (flags->pres == 1)
					flags->pres = (int)va_arg(ap, int);
				else
					flags->size = (int)va_arg(ap, int);
			}
			ft_prints(flags);
		}
		ft_putstr("x><><x><><x\n");
		ft_putstr((char*)format);
		ft_putchar('\n');
		ft_prints(flags);
		ft_putstr("x><><x><><x\n");
	}
	return (ft_check_flags(*format, flags, ap));
}
