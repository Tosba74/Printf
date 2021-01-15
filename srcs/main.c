/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:46:14 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/15 18:17:51 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int main(void)
{
	double pi;
	
	pi = 3.141591654;
	printf("1ALEXIS JE TAIME mais %-*.3s theo %*s lavabo\n", 7, "salut", 6, "42");	
	ft_printf("ALEXIS JE TAIME mais %-*.3s theo %*s lavabo\n", 7, "salut", 6, "42");	
	return (0);
}
