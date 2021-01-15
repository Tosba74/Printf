/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:29:00 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/15 16:30:40 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_all_z(char *s)
{
	while (*s++)
		*s = '0';
	return (s);
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

int		ft_isflags(char c)
{
	int		i;
	char	*flags;

	i = -1;
	flags = "-.*";
	while (flags[++i])
		if (*flags == c)
			return (i);
	return (-1);
}

void	ft_re_init(t_flags *flags)
{
	flags->size = -1;
	flags->zero = 0;
	flags->rev = 0;
	flags->prec = 0;
	flags->star = 0;
}

void	ft_prints(t_flags *flags)
{
	ft_putstr("------------\n");
	ft_putstr("size => ");
	ft_putnbr(flags->size);
	ft_putstr("\nzero => ");
	ft_putnbr(flags->zero);
	ft_putstr("\nrev => ");
	ft_putnbr(flags->rev);
	ft_putstr("\nprec => ");
	ft_putnbr(flags->prec);
	ft_putstr("\nstar => ");
	ft_putnbr(flags->star);
	ft_putstr("\nlength => ");
	ft_putnbr(flags->length);
	ft_putstr("\nspec => ");
	ft_putchar(flags->spec);
	ft_putstr("\n------------\n");
	ft_putchar('\n');
}
