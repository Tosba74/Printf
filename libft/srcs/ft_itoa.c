/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:31:30 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/26 14:53:39 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_len_num(long n)
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
		n /= 10;
		count++;
	}
	if (count == 0)
		count++;
	return (count);
}

static void		ft_recursive(long nb, int len, char *res)
{
	res[len] = nb % 10 + '0';
	if (nb > 9)
		ft_recursive(nb / 10, len - 1, res);
}

char			*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*result;

	nb = (long)n;
	len = ft_len_num(n);
	if (!(result = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	result[len] = '\0';
	ft_recursive(nb, len - 1, result);
	return (result);
}
