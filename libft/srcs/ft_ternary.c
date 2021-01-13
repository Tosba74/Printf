/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ternary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 20:50:19 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/11 10:37:17 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/libft.h"

void	ft_ternary (int *(*condition)(void *), void *(*f1)(void *), void *(*f2)(void *))
{
	if (condition() == 0)
		return (f1());
	else if (condition() > 0)
		return (f2(void *));
}