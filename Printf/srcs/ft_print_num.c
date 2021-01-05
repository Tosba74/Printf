/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2020/12/14 19:49:22 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_len_num(long n, int b)
{
	int		count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n /= b;
		count++;
	}
	if (count == 0)
		count++;
	return (count);
}

int		ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
	return (ft_len_num(nb, 10));
}

int		ft_putnbr_base_x(int n, char *base)
{
	long	nb;
	int		b;

	nb = n;
	b = 16;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= b)
		ft_putnbr_base_x(nb / 16, base);
	ft_putchar(base[nb % 16]);
	return (ft_len_num(nb, 16));
}
