/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 21:42:29 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/09 14:15:56 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_len_nbr(unsigned int n, unsigned int b)
{
	int		count;

	count = 0;
	while (n >= b)
	{
		n /= b;
		count++;
	}
	count++;
	return (count);
}

static void		ft_recursive_utoa(unsigned long long nb, int i, const char *base,
char *result)
{
	unsigned int b;

	b = (unsigned int)ft_check_base(base);
	result[i] = (char)base[nb % b];
	if (nb >= b)
		ft_recursive_utoa(nb / b, i - 1, base, result);
}
#include <stdio.h>
char		*ft_utoa_base(unsigned long long n, const char *base)
{
	unsigned long long	nb;
	unsigned int		b;
	int				len;
	char			*result;

	nb = (unsigned long long)n;
	printf("nb => %llu", nb);
	b = (long)ft_check_base(base);
	len = ft_len_nbr(nb, b);
	// printf("Salut");
	if (b == 0 || b == 1)
		return (0);
	if (!(result = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	result[len] = '\0';
	ft_recursive_utoa(nb, len - 1, base, result);
	return (result);
}
