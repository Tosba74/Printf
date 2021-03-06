/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/14 17:44:49 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_prepare_out(t_flags tf, int size, unsigned int nb)
{
	int						i;
	char					*out;

	i = 0;
	out = NULL;
	if (ft_norm_all((void *)&out, (size + 1), sizeof(char)))
		return (NULL);
	while (i != size)
	{
		if ((i >= size - (tf.prec) && tf.rev == 0 && tf.prec > -1)
			|| (i < tf.prec && tf.rev == 1 && tf.prec > -1))
			out[i++] = '0';
		else if (i < size - tf.prec && tf.prec > -1)
		{
			if (i == size - (tf.prec + 1) && nb < 0)
				out[i++] = '-';
			else
				out[i++] = ' ';
		}
		else
			out[i++] = (char)tf.zero;
	}
	return (out);
}

static char	*ft_mix_str(char *dst, char *src, t_flags *flags)
{
	int						i;
	int						len;
	int						cp;

	i = ft_strlen(dst) - ft_strlen(src);
	len = ft_strlen(src);
	cp = 0;
	if (src[0] == '-' && ((flags->zero == 48 && flags->prec == -1)
			|| len < flags->prec || flags->rev == 1))
	{
		src++;
		cp = 1;
	}
	len = ft_strlen(src);
	if (flags->rev == 1)
	{
		if (flags->prec > len)
			ft_memcpy(dst + cp + (flags->prec - len), src, len);
		else
			ft_memcpy(dst + cp, src, len);
	}
	else if (flags->rev == 0)
		ft_memcpy(dst + i + cp, src, len);
	return (dst);
}

int	ft_print_u(t_flags *flags)
{
	unsigned int		nb;
	size_t				size;
	char				*nb_str;
	char				*out;

	nb = (unsigned int)va_arg(flags->ap, unsigned int);
	out = NULL;
	if (nb == 0 && flags->prec == 0)
		nb_str = ft_strdup("");
	else
		nb_str = ft_utoa_base(nb, ft_get_base(flags->spec));
	size = ft_check_len(flags, nb_str);
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
