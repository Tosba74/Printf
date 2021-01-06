/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:04:18 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/06 18:23:56 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);
	while (*format)
	{
		if ((ft_isconvert(*format + 1) || ft_isflags(*format + 1)
		|| ft_isalnum((int)*format + 1)) && *format == '%')
		{
			ft_putstr(" ahah\n");
			ft_print_format(format, ap);
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (0);
}
