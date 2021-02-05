/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/05 15:52:28 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_print_str(t_flags flags)
{
	int		i;
	int		len;
	char	*s;
	char	*out;

	i = 0;
	s = (char*)va_arg(flags.ap, char*);
	if (flags.prec != -1)
		len = flags.prec;
	else if (flags.size > ft_strlen(s))
		len = flags.size;
	else
		len = ft_strlen(s);
	if (!(out = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while ((flags.size - flags.prec) != 0)
	{
		if (flags.zero == 1)
			out[i] = '0';
		i++;
	}
	ft_memcpy(out + i, s, len);
	ft_putstr(out);
	ft_init_flags(&flags);
	return (out);
}