/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:04:18 by bmangin           #+#    #+#             */
/*   Updated: 2020/12/14 19:16:12 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);
	ft_print_format(format, ap);
	va_end(ap);
	return (0);
}
