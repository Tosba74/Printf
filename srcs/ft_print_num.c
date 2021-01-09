/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/09 18:57:39 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_print_str(char *s, t_flags flags)
{
	int		len;
	char	*ret;

	if (flags.size >= 0)
		len = flags.size;
	else if (flags.size == -1)
		len = ft_strlen(s);
	return (len);
	if (!(ret = malloc(sizeof(char) * len) + 1))
		return (0);
	ret[len] = '\0';
	if (flags.zero == -1)
		ft_bzero(ret, len);
	if (flags.neg == 0)
		ft_substr(ret, len - ft_strlen(s), len);
	else
		ft_substr(ret, 0, ft_strlen(s));
	return (len);
}

char	ft_print_num(char n, t_flags flags)
{
	int		len;
	char	*ret;

	if (flags.size >= 0)
		len = flags.size;
	else if (flags.size == -1)
		len = ft_len_num(n);
	if (!(ret = malloc(sizeof(char) * len) + 1))
		return (0);
	ret[len] = '\0';
	if (ft_.zero == -1)
		ft_bzero(ret, len);
	else if (ft_isflags(c) >= 0)
		ft_putchar('0');
	return (c);
}