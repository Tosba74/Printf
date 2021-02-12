/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/10 16:08:07 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_print_str(t_flags flags, char *s)
{
	int		i;
	int		len;
	int		size;
	char	*out;

	if (!s)
		s = "(NULL)";
	i = 0;
	len = ft_strlen(s);
	if (-1 < flags.prec && flags.prec < len)
		size = flags.prec;
	else if (flags.size > len)
		size = flags.size;
	else
		size = len;
	if (!(out = malloc(sizeof(char) * size + 1)))
		return (0);
	out[size] = '\0';
	if ((-1 < flags.prec && flags.prec < len) && flags.prec < size)
	{
		if (flags.rev == 0)
			ft_memcpy(out + i, s, flags.prec);
		while (i != (size - flags.prec))
			out[i++] = (char)flags.zero;
		if (flags.rev == 1)
			ft_memcpy(out + i, s, flags.prec);
	}
	else if (len < size)
	{
		if (flags.rev == 0)
			ft_memcpy(out + i, s, len);
		while (i != (size - len))
			out[i++] = (char)flags.zero;
		if (flags.rev == 1)
			ft_memcpy(out + i, s, len);
	}
	else
		ft_memcpy(out, s, size);
	ft_putstr(out);
	ft_memdel(out);
	return (len);
}