/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/16 23:37:58 by bmangin          ###   ########lyon.fr   */
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
		if (s[0] == '-' && flags.prec > flags.size)
			len++;
	}
	return(len);	
}


static char	*ft_prepare_str(t_flags flags, int len, int nb)
{
	int		i;
	int		cp;
	char	*out;
	
	i = 0;
	cp = 0;
	if (!(out = malloc(sizeof(char) * len + 1)))
		return(NULL);
	out[len] = '\0';
	if (flags.rev == 0)
	{
		if (flags.size > flags.prec)
		{
			while (i < (flags.size - (flags.prec + 1)))
				out[i++] = ' ';
			if (nb < 0 && i == (flags.size - (flags.prec + 1)))
				out[i++] = '-';
			else
				out[i++] = ' ';	
			while (i < len) 
				out[i++] = '0';
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
	return (out);
}

static void	*ft_mix_str(char *dst, char *src, t_flags *flags)
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
		src++;
		cp = 1;
	}
	if (flags->rev == 0)
	{
		while (dst[i])
			dst[i++] = src[j++];
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
	// ft_putstr("str => |");
	// ft_putstr(src);
	// ft_putstr("| dst => |");
	// ft_putstr(dst);
	// ft_putchar('|');
	// ft_putchar('\n');
	ft_print_and_clean(flags, dst);
	// free(src);
}

int			ft_print_num(t_flags *flags)
{
	int		nb;
	int		len;
	char	*nb_str;
	char	*out;
	
	nb = va_arg(flags->ap, int);
	nb_str = ft_itoa_base(nb, ft_choose_base(flags->spec));
	len = ft_check_len(*flags, nb_str);
	if (len == ft_strlen(nb_str))
	{	
		ft_print_and_clean(flags, nb_str);
		return (len);
	}
	else if (len > ft_strlen(nb_str))
	{	
		out = ft_prepare_str(*flags, len, nb);
		ft_mix_str(out, nb_str, flags);
		return (ft_strlen(out));
	}
}

int		ft_print_ptr(t_flags *flags)
{
	int nb = va_arg(flags->ap, int);
	ft_putstr("Salut je suis un pointeur\n");

	return (1);
}

int		ft_print_hex(t_flags *flags)
{
	ft_putstr("Salut je suis un Hex\n");
	(void)va_arg(flags->ap, int);
	return (1);
}

int		ft_print_pourcent(t_flags *flags)
{
	ft_putstr("Salut je suis un Hex\n");
	(void)va_arg(flags->ap, int);
	return (1);
}
