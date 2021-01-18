/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:46:14 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/18 13:15:28 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int main(void)
{
	char	*str;
	double pi;
	
	str = "salut";
	pi = 3.141591654;
	printf("1ALEXIS JE TAIME mais %-*.2s theo %*s lavabo\n", 3, str, 6, "42");	
	ft_printf("ALEXIS JE TAIME mais %-*.2s theo %*s lavabo\n", 3, str, 6, "42");	
	return (0);
}