/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:46:14 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/23 21:51:14 by bmangin          ###   ########lyon.fr   */
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
	int nb = -4242;
	// int *ptr = &nb;
	// dprintf(1, "1ALEXIS JE TAIME mais %-15.45s theo %-6s lavabo\n", str, "42");	
	// ft_printf("ALEXIS JE TAIME mais %-15.45s theo %-6s lavabo\n",  str, "42");	
	// ft_printf("Jaime bien: %*s %*s\n", 5, "coucou", 5, "hey");
	// ft_printf("Jaime bien: %*s\n", 5, "coucou");
	// ft_printf("Jaime bien:\n%-10.*d\n", 6, nb);
	// ft_printf("Jaime bien:\n%*c\n", 7, nb);
	// ft_printf("Jaime bien:\n%*x\n", 8, nb);
	// ft_printf("Jaime bien:\n%*p\n", 9, ptr);
	dprintf(1, "[%*s == (%10d)]\n", 6,"10d", nb);
	ft_printf("[%6s == (%10d)]\n", "10d", nb);
	dprintf(1, "[%6s == (%010d)]\n", "010d", nb);
	ft_printf("[%6s == (%010d)]\n", "010d", nb);
	dprintf(1, "[%6s == (%-10d)]\n", "-10d", nb);
	ft_printf("[%6s == (%-10d)]\n", "-10d", nb);
	dprintf(1, "[%6s == (%--10d)]\n", "--10d", nb);
	ft_printf("[%6s == (%--10d)]\n", "--10d", nb);
	dprintf(1, "[%6s == (%-10.6d)]\n", "-10.6d", nb);
	ft_printf("[%6s == (%-10.6d)]\n", "-10.6d", nb);
	dprintf(1, "[%6s == (%10.6d)]\n", "10.6d", nb);
	ft_printf("[%6s == (%10.6d)]\n", "10.6d", nb);
	dprintf(1, "[%6s == (%010.6d)]\n", "010.6d", nb);
	ft_printf("[%6s == (%010.6d)]\n", "010.6d", nb);
	dprintf(1, "[%6s == (%-.10d)]\n", "-.10d", nb);
	ft_printf("[%6s == (%-.10d)]\n", "-.10d", nb);
	dprintf(1, "[%6s == (%.10d)]\n", ".10d", nb);
	ft_printf("[%6s == (%.10d)]\n", ".10d", nb);
	dprintf(1, "[%6s == (%5.3d)]\n", "5.3d", nb);
	ft_printf("[%6s == (%5.3d)]\n", "5.3d", nb);
	dprintf(1, "[%6s == (%-7.3d)]\n", "-7.3d", nb);
	ft_printf("[%6s == (%-7.3d)]\n", "-7.3d", nb);
	dprintf(1, "[%6s == (%6.10d)]\n", "6.10d", nb);
	ft_printf("[%6s == (%6.10d)]\n", "6.10d", nb);
	dprintf(1, "[%6s == (%-6.10d)]\n", "-6.10d", nb);
	ft_printf("[%6s == (%-6.10d)]\n", "-6.10d", nb);
	dprintf(1, "[%6s == (%3.6d)]\n", "-3.6d", nb);
	ft_printf("[%6s == (%3.6d)]\n", "-3.6d", nb);
	dprintf(1, "[%6s == (%03.6d)]\n", "03.6d", nb);
	ft_printf("[%6s == (%03.6d)]\n", "03.6d", nb);
	getchar();
	return (0);
}