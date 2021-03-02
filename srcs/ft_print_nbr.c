/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/01 21:03:42 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

# include <stdio.h>

static int	ft_check_len(t_flags flags, char *s)
{
	int		len;

	len = ft_strlen(s);
	if (flags.spec == 'p')
		len += 2;
	if (flags.size > len)
		len = flags.size;
	if (flags.prec > len)
	{
		len = flags.prec;
		if (s[0] == '-')
			len++;
	}
	return (len);
}

static char	*ft_prepare_str(t_flags flags, int size, int nb)
{
	char	*out;
	int		neg;
	int		i;
	
	// dprintf(1, "\nsize => |%d|\n", size);
	if (!(out = malloc(sizeof(char) * size + 1)))
		return (NULL);
	neg = 0;
	if (nb < 0 && (flags.rev == 1 || (flags.zero == 48 && flags.prec == -1)
	|| (flags.size < flags.prec)))
		out[neg++] = '-';
	i = neg;
	while (i != size)
	{
		if (i < flags.prec + neg && flags.rev == 1
		&& flags.prec > -1)
			out[i++] = '0';
		else if (i >= size - (flags.prec + neg) && flags.rev == 0
		&& flags.prec > -1)
			out[i++] = '0';
		else if (i < size - flags.prec && flags.prec > -1)
		{
			if (i == size - (flags.prec + 1) && nb < 0)
				out[i++] = '-';
			else
				out[i++] = ' ';
		}
		else
			out[i++] = (char)flags.zero;
	}
	out[i] = '\0';
	return (out);
}

static char	*ft_mix_str(char *dst, char *src, t_flags *flags)
{
	int		i;
	int		len;
	int		cp;

	i = ft_strlen(dst) - ft_strlen(src);
	len = ft_strlen(src);
	cp = 0;
	// ft_putstr("dst => |");
	// ft_putstr(dst);
	// ft_putstr("| ");
	// ft_putstr(src);
	// ft_putstr("| <= src");
	/*
	if (src[0] == '-')
	{
		if ((flags->rev == 1 || (flags->zero == 48 && flags->prec == -1)
		|| (flags->size > flags->prec)))
		// if (flags->prec > ft_strlen(src)
		// || flags->zero == 48 || flags->rev == 1)
		{
			src++;
			cp = 1;
		}
	}
	*/
	// if (src[0] == '-' && (flags->rev == 1 || (flags->zero == 48 && flags->prec == -1)
	// || (flags->size < flags->prec)))
	// if (src[0] == '-' && ((flags->prec > len || flags->prec == -1) 
	// || (flags->rev == 0) || flags->size != 0))
	if (src[0] == '-' && ((flags->prec > len || flags->prec == -1)
	|| flags->size > ft_strlen(src)))
	{
		src++;
		cp = 1;
	}
	len = ft_strlen(src);
	// dprintf(1, "\ndst => |%s|\n src => |%s|%d|\n(", dst, src, len);
	if (flags->rev == 1)
	{
		if (flags->prec > len)
			ft_memcpy(dst + cp + (flags->prec - ft_strlen(src)), src, ft_strlen(src));
		else
			ft_memcpy(dst + cp, src, ft_strlen(src));
	}
	else if (flags->rev == 0)
		ft_memcpy(dst + i + cp, src, ft_strlen(src));
	return (dst);
}

int			ft_print_num(t_flags *flags)
{
	int		nb;
	int		size;
	int		len;
	char	*nb_str;
	char	*out;

	nb = va_arg(flags->ap, int);
	if (nb == 0)
		nb_str = ft_strdup("0");
	else
		nb_str = ft_itoa_base(nb, ft_choose_base(flags->spec));
	size = ft_check_len(*flags, nb_str);
	len = ft_strlen(nb_str);
	if (size == len)
	{
		ft_print_and_clean(flags, nb_str);
	}
	else if (size > len)
	{
		out = ft_prepare_str(*flags, size, nb);
		out = ft_mix_str(out, nb_str, flags);
		ft_memdel(nb_str);
		ft_print_and_clean(flags, out);
	}
	return (size);
}

int			ft_print_ptr(t_flags *flags)
{
	int nb;

	nb = va_arg(flags->ap, int);
	ft_putstr("Salut je suis un pointeur\n");
	return (1);
}

int			ft_print_hex(t_flags *flags)
{
	ft_putstr("Salut je suis un Hex\n");
	(void)va_arg(flags->ap, int);
	return (1);
}

int			ft_print_pourcent(t_flags *flags)
{
	ft_putstr("Salut je suis un Hex\n");
	(void)va_arg(flags->ap, int);
	return (1);
}
