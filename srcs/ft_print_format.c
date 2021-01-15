/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:03:02 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/15 19:11:43 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_check_flags(t_flags *flags)
{
	/*
	ft_putstr("\nx><><x><><x\n");
	ft_prints(flags);
	ft_putstr("x><><x><><x\n");
	if (format == 'c')
		return (ft_putchar_len(flags));
	*/
	if (flags->spec == 's')
		flags->length += ft_print_str(*flags);
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
	ft_re_init(flags);
}

int		ft_init_format(t_flags *flags, const char *format)
{
	int i;

	i = 0;
	while (ft_isconvert(format[i]) == -1)
	{
		if (format[i] == '-')
			flags->rev = 1;
		if (format[i] == '*')
			flags->star = 1;
		if (format[i] == '.')
		{
			flags->prec = 1;
			i++;
			if (format[i] == '*')
				flags->prec = va_arg(flags->ap, int);
			else
				flags->prec = ft_atoi(format);
		}
		if (ft_isalnum(format[i]))
		{
			if (format[i] == '0')
				flags->zero = 1;
			else if (format[i] != '0')
			{
				if (flags->prec == 1)
					flags->prec = ft_atoi(format);
				else if (flags->size == -1)
					flags->size = ft_atoi(format);
			}
		}
		if (flags->star == 1)
		{
			if (flags->prec == 0)
				flags->size = va_arg(flags->ap, int);
			else if (flags->prec == 1)
				flags->prec = va_arg(flags->ap, int);
			flags->star = 0;
		}
		i++;
		ft_prints(flags);
	}
	flags->spec = format[i];
	ft_prints(flags);
	ft_check_flags(flags);
	return (i);
}

/*
int		ft_print_format(const char *format, t_flags *flags)
{
	format++;
	while (ft_isconvert(*format) == -1)
	{
		if (ft_isalnum(*format))
		{
			if (*format == '0')
				flags->zero = 1;
			else if (*format != '0')
			{
				if (flags->prec == 1)
					flags->prec = ft_atoi(format);
				if (flags->size == -1)
					flags->size = ft_atoi(format);
			}
			while (ft_isalnum(*format))
				format++;
		}
		if (ft_isflags(*format) == -1)
		{
			ft_putstr("hahahahah");
			ft_init_flags(*format, flags);
			if (flags->star == 1)
			{
				if (flags->prec == 0)
					flags->size = (int)va_arg(flags->ap, int);
				else if (flags->prec == 1)
					flags->prec = (int)va_arg(flags->ap, int);
			}
		}
		ft_putstr("char => ");
		ft_putchar(*format);
		ft_putchar('\n');
		ft_putstr("\nx><><x><><x\n");
		ft_prints(flags);
		ft_putstr("x><><x><><x\n");
		format++;
	}
	return (0);
	//ft_putstr("\nx><><x><><x\n");
	//ft_prints(flags);
	//ft_putstr("x><><x><><x\n");
	//return (ft_check_flags(*format, flags, ap));
}
*/