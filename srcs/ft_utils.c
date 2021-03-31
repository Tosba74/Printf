/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:29:00 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/14 16:59:25 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isvalue(char c)
{
	if (ft_isdigit((int)c) || c == '*')
		return (1);
	return (0);
}

int	ft_isconvert(char c)
{
	int		i;
	char	*convert;

	i = -1;
	convert = "cspdiuxX%";
	while (convert[++i])
		if (convert[i] == c)
			return (i);
	return (i);
}

char	*ft_get_base(char c)
{
	char	*base;

	if (c == 'p' || c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789";
	return (base);
}

void	ft_init_flags(t_flags *flags)
{
	flags->size = -1;
	flags->zero = 32;
	flags->rev = 0;
	flags->prec = -1;
	flags->length = 0;
	flags->spec = '-';
}

void	ft_print_and_clean(t_flags *flags, char *s, int size)
{
	flags->size = -1;
	flags->zero = 32;
	flags->rev = 0;
	flags->prec = -1;
	flags->spec = '-';
	ft_putstr_len(s, size);
	ft_memdel(s);
}
