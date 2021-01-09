/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/09 14:23:50 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_print_str(char *s, t_flags *flags)
{
	int		len;

	if (flags->size == -1)

}

char	ft_print_num(char c)
{
	if (ft_isconvert(c) >= 0)
		ft_putchar('1');
	else if (ft_isflags(c) >= 0)
		ft_putchar('0');
	return (c);
}