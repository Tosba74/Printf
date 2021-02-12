/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:34:37 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/10 20:38:49 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_isvalue(char c)
{
	if (ft_isdigit(c) || c == '*')
		return (1);
	return (0);
}

int		ft_complet_value(int *f, t_flags flags, const char *format)
{
	int		i;

	i = 0;
	if (format[i] == '*')
	{
		*f = va_arg(flags.ap, int);
		i++;
	}
	else if (ft_isdigit(format[i]))
	{
		*f = ft_atoi(format);
		while (ft_isdigit(format[i]))
			i++;
	}
	return (i);
}

int		ft_parse(t_flags *flags, const char *format)
{
	int		i;

	i = 0;
	if (format[i] == '-' || format[i] == '0')
	{
		if (format[i] == '-')
			flags->rev = 1;
		else if (format[i] == '0' && flags->rev == 0)
			flags->zero = 48;
		i++;
	}
	if (ft_isvalue(format[i]))
		i += ft_complet_value(&flags->size, *flags, format + i);
	if (format[i] == '.')
	{
		i++;
		i += ft_complet_value(&flags->prec, *flags, format + i);
	}
	if (ft_isconvert(format[i]) != -1)
		flags->spec = format[i++];
	return (i);
}
