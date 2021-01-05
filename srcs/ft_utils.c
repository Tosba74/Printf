/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:29:00 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/05 15:29:29 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_isconvert(char c)
{
	int		i;
	char	*flags;

	i = -1;
	flags = "cspdiuxX%";
	while (flags[++i])
		if (flags[i] == c)
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
			return (-1);
	return (i);
}
