/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/28 11:08:34 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

#include <stdio.h>

static int	ft_size_str(t_flags flags, char *s)
{
	int		len;
	int		size;
	
	size = 0;
	len = ft_strlen(s);
	if (-1 < flags.prec && flags.prec < len)
		size = flags.prec;
	if (flags.size > size)
		size = flags.size;
	if (len > size && (0 > flags.prec && flags.prec > len))
		size = len;
	return (size);	
}

char		*ft_reverse_str(t_flags flags, char *s, int size, int var)
{
	int		i;
	int		len;
	char	*out;
	
	i = 0;
	len = ft_strlen(s);
	if (!(out = malloc(sizeof(char) * size + 1)))
		return (NULL);
	out[size] = '\0';
	if (var < 0)
		var = -var;
	while (i < size)
		out[i++] = ' ';
	// dprintf(1, "s = %s\nsize = %d\nvar = %d\n", s, size, var);
	// dprintf(1, "out = |%s|\n", out);
	if (size == len && flags.prec == -1)
		ft_memcpy(out, s, var);
	else if (flags.rev == 1)
		ft_memcpy(out, s, var);
	else if (flags.rev == 0)
		ft_memcpy(out + (size - var), s, var);	
	// dprintf(1, "out = |%s|\n", out);
	return (out);
}

int			ft_print_str(t_flags *flags)
{
	int		i;
	int		size;
	int		len;
	char	*s;
	char	*out;

	s = va_arg(flags->ap, char *);
	if (!s)
		s = "(NULL)";
	i = 0;
	len = ft_strlen(s);
	size = ft_size_str(*flags, s);
	// ft_prints(flags);
	if (-1 < flags->prec && flags->prec < len)
	{
		// ft_putstr("PREC MOTHER FUCKER\n");
		out = ft_reverse_str(*flags, s, size, flags->prec);
	}
	else
	{
		// ft_putstr("NO PREC MOTHER FUCKER\n");
		out = ft_reverse_str(*flags, s, size, len);
	}
	ft_print_and_clean(flags, out);
	return (ft_strlen(out));
}

int		ft_print_char(t_flags *flags)
{
	int len = 0;
	char *out;
	ft_putstr("Salut je suis un char\n");
	(void)va_arg(flags->ap, int);
	ft_print_and_clean(flags, out);
	return (len);
	
}