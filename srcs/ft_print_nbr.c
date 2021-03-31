/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/20 12:46:14 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_check_len(t_flags *flags, char *s)
{
	size_t	len;
	int		size;

	len = ft_strlen(s);
	if (flags->size != -1)
	{
		if (flags->size < 0)
		{
			size = flags->size * -1;
			flags->rev = 1;
		}
		else
			size = flags->size;
	}
	else
		size = 0;
	if ((int)len < size)
		len = size;
	if ((int)len <= flags->prec)
	{
		len = flags->prec;
		if (s[0] == '-')
			len++;
	}
	return (len);
}

static char	ft_print_good_char(t_flags tf, int size, int i, int nb)
{
	int		neg;

	neg = 0;
	if ((tf.rev == 1 || (tf.zero == 48 && tf.prec < 0) || (tf.size < tf.prec))
		&& nb < 0)
		neg = 1;
	if ((i >= size - (tf.prec + neg) && tf.rev == 0 && tf.prec > 1)
		|| (i < tf.prec + neg && tf.rev == 1 && tf.prec > 0))
		return ('0');
	else if (i < size - tf.prec && tf.prec != -1 && tf.prec != size)
	{
		if (nb < 0 && (((i == size - (tf.prec + 1) && tf.prec != 0)
					&& tf.rev == 0) || (i == 0 && tf.prec == 0 && tf.rev == 1)))
			return ('-');
		else if (tf.zero == 48 && tf.prec < 0 && tf.size > 1)
			return (tf.zero);
		else
			return (' ');
	}
	else
		return (tf.zero);
}

static char	*ft_prepare_out(t_flags tf, int size, int nb)
{
	char	*out;
	int		neg;
	int		i;

	out = NULL;
	if (ft_norm_all((void *)&out, size + 1, sizeof(char)))
		return (NULL);
	neg = 0;
	if ((tf.rev == 1 || (tf.zero == 48 && tf.prec < 0) || (tf.size < tf.prec))
		&& nb < 0)
		out[neg++] = '-';
	i = neg;
	while (i != size)
	{
		out[i] = ft_print_good_char(tf, size, i, nb);
		i++;
	}
	return (out);
}

static char	*ft_mix_str(char *dst, char *src, t_flags *tf)
{
	int		i;
	int		len;
	int		cp;

	i = ft_strlen(dst) - ft_strlen(src);
	len = ft_strlen(src);
	cp = 0;
	if (src[0] == '-' && ((tf->zero == 48 && tf->prec < 0)
			|| tf->rev == 1 || tf->prec >= len))
	{
		src++;
		cp = 1;
	}
	len = ft_strlen(src);
	if (tf->rev == 1)
	{
		if (tf->prec > len)
			ft_memcpy(dst + cp + (tf->prec - len), src, len);
		else
			ft_memcpy(dst + cp, src, len);
	}
	else if (tf->rev == 0)
		ft_memcpy(dst + i + cp, src, len);
	return (dst);
}

int	ft_print_num(t_flags *flags)
{
	int		nb;
	size_t	size;
	char	*nb_str;
	char	*out;

	nb = (int)va_arg(flags->ap, int);
	if (nb == 0 && flags->prec == 0)
		nb_str = ft_strdup("");
	else if (nb == 0 && ((flags->prec < 1 || flags->size == flags->prec)
			|| flags->prec == 1))
		nb_str = ft_strdup("0");
	else
		nb_str = ft_itoa_base(nb, ft_get_base(flags->spec));
	size = ft_check_len(flags, nb_str);
	out = NULL;
	if (size == ft_strlen(nb_str))
		ft_print_and_clean(flags, nb_str, size);
	else if (size > ft_strlen(nb_str))
	{
		out = ft_prepare_out(*flags, size, nb);
		out = ft_mix_str(out, nb_str, flags);
		ft_memdel(nb_str);
		ft_print_and_clean(flags, out, size);
	}
	return (size);
}
