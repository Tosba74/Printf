/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:29:00 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/16 13:43:11 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_isvalue(char c)
{
	if (ft_isdigit((int)c) || c == '*')
		return (1);
	return (0);
}

int		ft_isconvert(char c)
{
	int		i;
	char	*convert;

	i = -1;
	convert = "cspdiuxX%";
	while (convert[++i])
		if (convert[i] == c)
			return (i);
	return (-1);
}

char	*ft_choose_base(char c)
{
	char *base;
	if (c == 'd' || c == 'i')
		base = "0123456789";
	else if (c == 'p' || c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	return (base);
}

void	ft_print_and_clean(t_flags *flags, char *s)
{
	flags->size = -1;
	flags->zero = 32;
	flags->rev = 0;
	flags->prec = -1;
	flags->spec = '-';
	ft_putstr(s);
	ft_memdel(s);
}

void	ft_init_flags(t_flags *flags)
{
	flags->size = -1;
	flags->zero = 32;
	flags->rev = 0;
	flags->prec = -1;
	flags->spec = '-';
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
