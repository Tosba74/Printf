/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:46:14 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/10 16:21:05 by bmangin          ###   ########lyon.fr   */
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
	printf("1ALEXIS JE TAIME mais %-15.45s theo %-6s lavabo\n", str, "42");	
	ft_printf("ALEXIS JE TAIME mais %-15.45s theo %-6s lavabo\n",  str, "42");	
	// ft_printf("Jaime bien: %*s %*s\n", 5, "coucou", 5, "hey");
	return (0);
}