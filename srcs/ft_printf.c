/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:04:18 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/27 13:26:06 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_complet_value(int *f, t_flags *flags, const char *format)
{
	int		i;

	i = 0;
	if (format[i] == '*')
	{
		*f = va_arg(flags->ap, int);
		i++;
	}
	else if (ft_isdigit((int)format[i]))
	{
		*f = ft_atoi(format);
		while (ft_isdigit((int)format[i]))
			i++;
	}
	return (i);
}

static int	ft_parse(t_flags *flags, const char *format)
{
	int		i;

	i = 1;
	while (format[i] == '-' || format[i] == '0')
	{
		if (format[i] == '-')
		{
			flags->rev = 1;
			flags->zero = 32;
		}
		else if (format[i] == '0' && flags->rev == 0)
			flags->zero = 48;
		i++;
	}
	if (ft_isvalue(format[i]))
		i += ft_complet_value(&flags->size, flags, format + i);
	if (format[i] == '.')
	{
		i++;
		if (ft_isconvert(format[i]) != -1)
			flags->prec = 0;
		else
			i += ft_complet_value(&flags->prec, flags, format + i);
	}
	if (ft_isconvert(format[i]) != -1)
		flags->spec = format[i];
	return (i);
}

static int	ft_converse(t_flags *flags)
{
	int		(*pf[8])(t_flags *flags) =
	{
		&ft_print_char,
		&ft_print_str,
		&ft_print_ptr,
		&ft_print_num,
		&ft_print_num,
		&ft_print_num,
		&ft_print_num,
		&ft_print_pourcent
	};
	return (pf[ft_isconvert(flags->spec)](flags));
}

int			ft_printf(const char *format, ...)
{
	t_flags	tf;
	int		i;

	tf = (t_flags) {.size = -1, .zero = 32, .prec = -1, .spec = '-'};
	i = -1;
	va_start(tf.ap, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			i += ft_parse(&tf, format + i);
			tf.length += ft_converse(&tf);
		}
		else
		{
			ft_putchar(format[i]);
			tf.length++;
		}
	}
	va_end(tf.ap);
	return (tf.length);
}
