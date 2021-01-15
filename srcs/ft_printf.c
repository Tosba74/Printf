/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:04:18 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/14 18:17:38 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_flags		tf;
	int			i;

	tf = (t_flags) {.size = -1};
	i = -1;
	va_start(tf.ap, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			i++;
			i += ft_init_format(&tf, format + i);
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
