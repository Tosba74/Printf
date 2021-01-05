/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:17:56 by bmangin           #+#    #+#             */
/*   Updated: 2020/12/14 18:10:02 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_strlen(char *s)
{
	size_t		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int		ft_putstr(char *s)
{
	int		len;

	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}
