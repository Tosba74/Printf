/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:46:14 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/13 12:15:59 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int main(void)
{
	double pi;
	
	pi = 3.141591654;
	printf("ALEXIS JE TAIME mais %-*s theo %-*d lavabo\n", 6, "salut", 6, 42);	
	ft_printf("ALEXIS JE TAIME mais %-*s theo %-*d lavabo\n", 6, "salut", 6, 42);	
	return (0);
}
