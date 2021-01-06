/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:29:00 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/06 18:57:44 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

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
	flags = "-0.*";
	while (flags[++i])
		if (*flags == c)
			return (i);
	return (-1);
}

void	ft_init_struct(t_flags *flags)
{
	ft_putstr("start init\n");
	flags->size = 0;
	ft_putnbr(flags->size);
	flags->zero = 0;
	ft_putnbr(flags->zero);
	flags->neg = 0;
	ft_putnbr(flags->neg);
	flags->pres = 0;
	ft_putnbr(flags->pres);
	flags->star = 0;
	ft_putnbr(flags->star);
	ft_putstr("end init\n");
}

void	ft_print_struct(t_flags *flags)
{
	ft_putstr("size =>");
	ft_putnbr(flags->size);
	ft_putstr("\nzero =>");
	ft_putnbr(flags->zero);
	ft_putstr("\nneg =>");
	ft_putnbr(flags->neg);
	ft_putstr("\npres =>");
	ft_putnbr(flags->pres);
	ft_putstr("\nstar =>");
	ft_putnbr(flags->star);
	ft_putchar('\n');
}

void	ft_init_flags(char format, t_flags *flags)
{
	ft_print_struct(flags);
	ft_putstr("\nahah == ");
	ft_putchar(format);
	ft_putchar('\n');
	if (ft_isflags(format) == 0)
		flags->size = 1;
	if (ft_isflags(format) == 1)
		flags->zero = 1;
	if (ft_isflags(format) == 2)
		flags->neg = 1;
	if (ft_isflags(format) == 3)
		flags->pres = 1;
	if (ft_isflags(format) == 4)
		flags->star = 1;
	ft_print_struct(flags);
}
