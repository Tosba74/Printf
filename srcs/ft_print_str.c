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

	i = 0;
	len = ft_strlen(s);
	if (-1 < flags.prec && flags.prec < len)
		size = flags.prec;
	else if (flags.size > len)
		size = flags.size;
	else
		size = len;
	ft_putnbr(size);
	if (!(out = malloc(sizeof(char) * size + 1)))
		return (0);
	ft_putstr("\nx><><x><><x\n");
	out[size] = '\0';
	if ((-1 < flags.prec && flags.prec < len) && flags.prec < size)
	{
		if (flags.rev == 0)	
			ft_memcpy(out + i, s, flags.prec);
		while (i != (size - flags.prec))
			out[i++] = ' ';
		if (flags.rev == 1)	
			ft_memcpy(out + i, s, flags.prec);
	}
	else if (len < size)
	{
		if (flags.rev == 0)	
			ft_memcpy(out + i, s, len);
		while (i != (size - len))
			out[i++] = ' ';
		if (flags.rev == 1)	
			ft_memcpy(out + i, s, len);
	}
	else
		ft_memcpy(out, s, size);
	/*
	if (flags.rev == 0)
	{
		if ((-1 < flags.prec && flags.prec < len) && flags.prec < size)
		{
			while (i != (size - flags.prec))
				out[i++] = ' ';
			ft_memcpy(out + i, s, flags.prec);
		}
		else if (len < size)
		{
			while (i != (size - len))
				out[i++] = ' ';
			ft_memcpy(out + i, s, len);
		}
		else
			ft_memcpy(out, s, size);
	}
	else if (flags.rev == 1)
	{
		if (flags.prec < size)
		{
			ft_memcpy(out, s, flags.prec);
			while (out[i])
				out[i++] = ' ';
		}
		else if (len < size)
		{
			ft_memcpy(out, s, len);
			while(out[i])
				out[i++] = ' ';
		}
		else
			ft_memcpy(out, s, size);
	}
	*/
	ft_putstr(out);
	ft_memdel(out);
	ft_init_flags(&flags);
	ft_putchar('\n');
	ft_prints(&flags);
	return (len);
}