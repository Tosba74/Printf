/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:29:00 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/13 12:15:18 by bmangin          ###   ########lyon.fr   */
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

void	ft_init_flags(const char format, t_flags *flags)
{
	if (format == '-')
		flags->neg = 1;
	if (format == '.')
		flags->pres = 1;
	if (format == '*')
		flags->star = 1;
}

void	ft_prints(t_flags *flags)
{
	ft_putstr("------------\n");
	ft_putstr("size => ");
	ft_putnbr(flags->size);
	ft_putstr("\nzero => ");
	ft_putnbr(flags->zero);
	ft_putstr("\nneg => ");
	ft_putnbr(flags->neg);
	ft_putstr("\npres => ");
	ft_putnbr(flags->pres);
	ft_putstr("\nstar => ");
	ft_putnbr(flags->star);
	ft_putstr("\n------------\n");
}

t_flags	*ft_init_struct(t_flags *flags)
{
//	ft_putstr("|\nfirst init\n");
	if (!(flags = malloc(sizeof(t_flags))))
		return (NULL);
	flags->size = -1;
	flags->zero = 0;
	flags->neg = 0;
	flags->pres = 0;
	flags->star = 0;
	//ft_prints(flags);
	return (flags);
}