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

void	ft_prints(t_flags *flags)
{
	ft_putstr("\n------------\n");
	ft_putstr("size => ");
	ft_putnbr(flags->size);
	ft_putstr("\nzero => ");
	ft_putnbr(flags->zero);
	ft_putstr("\nrev => ");
	ft_putnbr(flags->rev);
	ft_putstr("\nprec => ");
	ft_putnbr(flags->prec);
	ft_putstr("\nlength => ");
	ft_putnbr(flags->length);
	ft_putstr("\nspec => ");
	ft_putchar(flags->spec);
	ft_putstr("\n------------\n");
}
