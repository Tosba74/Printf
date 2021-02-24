/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/24 13:56:52 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

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
			if (i == size - (flags.prec + 1))
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
	/*
	if(flags.prec > len)
	{
		
	}
	else
	{
		while (i < len)
			out[i++] = (char)flags.zero;
	}
	out[i] = '\0';
	return (out);
	*/	
	
	/*
	int		i;
	int		cp;
	char	*out;

	i = 0;
	cp = 0;
	if (!(out = malloc(sizeof(char) * len)))
		return (NULL);
	if (flags.rev == 0)
	{
		if (flags.size > flags.prec)
		{
			while (i < (flags.size - (flags.prec)))
				out[i++] = flags.zero;
			if (nb < 0 && flags.prec > -1)
			{
				ft_putstr("Je suis la\n");
				out[flags.size - (flags.prec + 1)] = '-';
			}
			else
				out[i++] = flags.zero;
			while (i < len)
				out[i++] = '0';
			// if (nb < 0 && flags.zero == 48)
			// 	out[0] = '-';
		}
		else if (flags.size < flags.prec)
		{
			if (nb < 0)
			{
				out[0] = '-';
				i++;
			}
			while (out[i])
				out[i++] = '0';
		}
	}
	else if (flags.rev == 1)
	{
		// if (flags.size > flags.prec)
		// {
		if (nb < 0)
		{
			out[0] = '-';
			cp = 1;
			i++;
		}
		while (i < flags.prec + cp)
			out[i++] = '0';
		while (i < (flags.size))
			out[i++] = ' ';
		if (nb < 0 && flags.prec > flags.size)
			out[i++] = ' ';
	// }
	}
	cp = 0;
	out[i] = '\0';
	return (out);
	*/
// }

static void	ft_mix_str(char *dst, char *src, t_flags *flags)
{
	int		i;
	int		j;
	int		cp;

	i = ft_strlen(dst) - ft_strlen(src);
	j = 0;
	cp = 0;
	// ft_putstr("dst => |");
	// ft_putstr(dst);
	// ft_putstr("| ");
	if (src[0] == '-')
	{
		if ((flags->rev == 1 || (flags->zero == 48 && flags->prec == -1)
		|| (flags->size < flags->prec)))
		// if (flags->prec > ft_strlen(src)
		// || flags->zero == 48 || flags->rev == 1)
		{
			src++;
			cp = 1;
		}
	}
	if (flags->rev == 0)
	{
		while (dst[i])
			dst[(cp + i++)] = src[j++];
	}
	else if (flags->rev == 1)
	{
		if (flags->prec > ft_strlen(src))
			i = (flags->prec - ft_strlen(src));
		else
			i = 0;
		while (src[j])
			dst[cp + i++] = src[j++];
	}
	// ft_putstr("<= len | ft_ =>");
	// ft_putnbr(ft_strlen(dst));
	// ft_putchar('\n');	
	ft_print_and_clean(flags, dst);
}

int			ft_print_num(t_flags *flags)
{
	int		nb;
	int		size;
	char	*nb_str;
	char	*out;

	nb = va_arg(flags->ap, int);
	nb_str = ft_itoa_base(nb, ft_choose_base(flags->spec));
	size = ft_check_len(*flags, nb_str);
	if (size <= ft_strlen(nb_str))
	{
		ft_print_and_clean(flags, nb_str);
		return (size);
	}
	else if (size > ft_strlen(nb_str))
	{
		out = ft_prepare_str(*flags, size, nb);
		// ft_putstr(out);
		// ft_putstr(") <= out\n");
		// ft_putnbr(size);
		ft_mix_str(out, nb_str, flags);
		ft_memdel(nb_str);
		return (size);
	}
	return (size);
}
	/*
	int		nb;
	char	*nb_str;
	int		i;
	int		j;
	int		len;

	nb = va_arg(flags->ap, int);
	nb_str = ft_itoa_base(nb, ft_choose_base(flags->spec));
	len = ft_check_len(*flags, nb_str);
	i = 0;
	j = 0;
	if (flags->rev == 0)
	{
		if (flags->rev == 0)
		{
			if (nb < 0 && flags->prec > flags->size)
			{
				ft_putchar('-');
				nb_str++;
				ft_putstr(nb_str);
			}
			if (i < (flags->size - flags->prec) || i < (flags->size - ft_strlen(nb_str)))
			{
				while (i != (flags->size - flags->prec) || i < (flags->size - ft_strlen(nb_str)))
				{
					ft_putchar((char)flags->zero);
					i++;
				}
			}
			if (nb < 0 && flags->prec > ft_strlen(nb_str))
			{
				ft_putchar('-');
				nb_str++;
			}
			while (j < (flags->size - i) - ft_strlen(nb_str))
			{
				ft_putchar('0');
				j++;
			}
		}
		ft_putstr(nb_str);
	}
	else if (flags->rev == 1)
	{
		ft_putstr(nb_str);
		i = ft_strlen(nb_str);
		while (i < flags->size || i < flags->prec)
		{
			ft_putchar(' ');
			i++;
		}
	}
	return (i + j);
	*/

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
