/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:46:14 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/03 17:27:42 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
// #include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	char	*str;
	// double pi;
	
	str = "salut";
	// pi = 3.141591654;
	// int nb = -4242;
	// int *ptr = &nb;
	// dprintf(1, "1ALEXIS JE TAIME mais %-15.45s theo %-6s lavabo\n", str, "42");	
	// ft_printf("ALEXIS JE TAIME mais %-15.45s theo %-6s lavabo\n",  str, "42");	
	// ft_printf("Jaime bien: %*s %*s\n", -5, "coucou", -5, "hey");
	ft_printf("Jaime bien: %*s\n", -5, "coucou");
	ft_printf("m = [%u]\n", 4294967294u);
	dprintf(1, "v = [%u]\n", 4294967294u);
	// ft_printf("Jaime bien:\n%*p\n", 9, ptr);
	// ft_printf("Jaime bien:\n%-10.*d\n", 6, nb);
	// ft_printf("Jaime bien:\n%*c\n", 7, nb);
	// ft_printf("Jaime bien:\n%*x\n", 8, nb);
	// ft_printf("[%6s == (%10x)]\n", "10x", nb);
	// dprintf(1, "[%6s == (%010d)]\n", "010d", nb);
	// ft_printf("[%6s == (%010d)]\n", "010d", nb);
	// dprintf(1, "[%6s == (%-10d)]\n", "-10d", nb);
	// ft_printf("[%6s == (%-10d)]\n", "-10d", nb);
	// dprintf(1, "[%6s == (%--10d)]\n", "--10d", nb);
	// ft_printf("[%6s == (%--10d)]\n", "--10d", nb);
	// dprintf(1, "[%6s == (%-10.6d)]\n", "-10.6d", nb);
	// ft_printf("[%6s == (%-10.6d)]\n", "-10.6d", nb);
	// dprintf(1, "[%6s == (%10.6d)]\n", "10.6d", nb);
	// ft_printf("[%6s == (%10.6d)]\n", "10.6d", nb);
	// dprintf(1, "[%6s == (%010.6d)]\n", "010.6d", nb);
	// ft_printf("[%6s == (%010.6d)]\n", "010.6d", nb);
	// dprintf(1, "[%6s == (%-.10d)]\n", "-.10d", nb);
	// ft_printf("[%6s == (%-.10d)]\n", "-.10d", nb);
	// dprintf(1, "[%6s == (%.10d)]\n", ".10d", nb);
	// ft_printf("[%6s == (%.10d)]\n", ".10d", nb);
	// dprintf(1, "[%6s == (%6.3d)]\n", "6.3d", nb);
	// ft_printf("[%6s == (%6.3d)]\n", "6.3d", nb);
	// dprintf(1, "[%6s == (%-7.3d)]\n", "-7.3d", nb);
	// ft_printf("[%6s == (%-7.3d)]\n", "-7.3d", nb);
	// dprintf(1, "[%6s == (%6.10d)]\n", "6.10d", nb);
	// ft_printf("[%6s == (%6.10d)]\n", "6.10d", nb);
	// dprintf(1, "[%6s == (%-6.10d)]\n", "-6.10d", nb);
	// ft_printf("[%6s == (%-6.10d)]\n", "-6.10d", nb);
	// dprintf(1, "[%6s == (%3.6d)]\n", "-3.6d", nb);
	// ft_printf("[%6s == (%3.6d)]\n", "-3.6d", nb);
	// dprintf(1, "[%6s == (%03.6d)]\n", "03.6d", nb);
	// ft_printf("[%6s == (%03.6d)]\n", "03.6d", nb);
	// dprintf(1, "|Hello, %s.|\n", "garvin");
	// ft_printf("|Hello, %s.|\n", "garvin");
	// dprintf(1, "|%.2s|\n", "abc");
	// ft_printf("|%.2s|\n", "abc");
	// dprintf(1, "|%.0s|%.s|\n", "abc", "abc");
	// ft_printf("|%.0s|%.s|\n", "abc", "abc");
	// dprintf(1, "[%6s == (%8.3d)]\n", "8.3d", -8473);
	// ft_printf("[%6s == (%8.3d)]\n", "8.3d", -8473);
	// dprintf(1, "[%6s == (%-8.3d)]\n", "-8.3d", -8473);
	// ft_printf("[%6s == (%-8.3d)]\n", "-8.3d", -8473);
	// dprintf(1, "[%6s == (%3d)]\n", "3d", 0);
	// ft_printf("[%6s == (%3d)]\n", "3d", 0);
	// dprintf(1, "[%6s == (%-3d)]\n", "-3d", 0);
	// ft_printf("[%6s == (%-3d)]\n", "-3d", 0);
	// ft_putstr("FIN!\n");
	// printf("v == [%8.5d]\n", 0);
	// ft_printf("m == [%8.5d]\n", 0);
	// getchar();

	return (0);
}