/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:46:14 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/20 10:43:07 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
// #include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	char	*str;
	// double pi;
	
	str = "42";
int		a = -4;
// 	int		b = 0;
	char	c = 'a';
// 	int		d = 2147483647;
// 	int		e = -2147483648;
// 	int		f = 42;
// 	int		g = 25;
	// int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	// char	*o = "-a";
	// char	*p = "-12";
	// char	*q = "0";
	// char	*r = "%%";
	// char	*s = "-2147483648";
	// char	*t = "0x12345678";
	// char	*u = "-0";	
	// pi = 3.141591654;
	// int nb = -4242;
	// int *ptr = &nb;
	// ft_printf("%%%dbada%s%%**%s**-d%%0*d%-12s0*@", h, "bada", r, p, r, r, i, r, i, r, i );
	printf("RET => %d\n",ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j));
	printf("RET => %d\n",ft_printf("%.*d", a, l));
	printf("RET => %d\n",printf("%.*d", a, l));
	// printf("len = %d\n", ft_strlen("(null)  (null) (nul (null)   (null)   (null) (null) (null)  ( (n (nul (null))"));
	// printf("res printf = %d\n" ,printf("ALEXIS JE TAIME mais %-15.45s theo %-6s lavabo\n", str, "42"));
	// printf("\n");	
	// printf("res ft_printf = %d\n", ft_printf("ALEXIS JE TAIME mais %-15.45s theo %-6s lavabo\n",  str, "42"));	
	// ft_printf("Jaime bien: %*s %*s\n", -5, "coucou", -5, "hey");
	// ft_printf("Jaime bien: %*s\n", -5, "coucou");
	// ft_printf("Jaime bien:\n%*p\n", 9, ptr);
	// ft_printf("Jaime bien:\n%-10.*d\n", 6, nb);
	// ft_printf("Jaime bien:\n%*c\n", 7, nb);
	// ft_printf("Jaime bien:\n%*x\n", 8, nb);
	// ft_putstr(ft_utoa_base(*str, "0123456789abcdef"));
	// ft_putstr("\n");
	// ft_putstr(ft_utoa_base(42, "0123456789abcdef"));
	// ft_putstr("\n");
	// printf(" 0*%-0*.10d*0 0*%-0*.0d*0 ", 21, 1021, 21, -1011);
	// ft_printf(" 0*%-0*.10d*0 0*%-0*.0d*0 ", 21, 1021, 21, -1011);
	// printf(" --0*%0*.0d*0 0*%0*.10d*0-- ", -2, 0, 21, 1);
	// ft_printf(" --0*%0*.0d*0 0*%0*.10d*0-- ", -2, 0, 21, 1);
	// printf(" --0*%0*.0d*0 0*%0*.10d*0-- ", -21, INT_MAX, 21, INT_MIN);
	// ft_printf(" --0*%0*.0d*0 0*%0*.10d*0-- ", -21, INT_MAX, 21, INT_MIN);
	// printf(" --0*%0*.0d*0 0*%0*.10d*0-- ", -21, LONG_MAX, 21, LONG_MIN);
	// ft_printf(" --0*%0*.0d*0 0*%0*.10d*0-- ", -21, LONG_MAX, 21, LONG_MIN);
	// printf(" --0*%-0*.20d*0 0*%-0*.10d*0-- ", -21, CHAR_MAX, 21, CHAR_MIN);
	// ft_printf(" --0*%-0*.20d*0 0*%-0*.10d*0-- ", -21, CHAR_MAX, 21, CHAR_MIN);
	// printf(" --0*%-0*.2d*0 0*%-0*.2d*0-- ", -21, CHAR_MAX, 21, CHAR_MIN);
	// ft_printf(" --0*%-0*.2d*0 0*%-0*.2d*0-- ", -21, CHAR_MAX, 21, CHAR_MIN);
	// printf(" --0*%-0*.3d*0 0*%-0*.3d*0-- ", -21, CHAR_MAX, 21, CHAR_MIN);
	// ft_printf(" --0*%-0*.3d*0 0*%-0*.3d*0-- ", -21, CHAR_MAX, 21, CHAR_MIN);
	// printf("le -->%-c%-c%c*\n", 1, '0', 0);
	// ft_printf("ft -->%*.5d\n", 10, -1);
	// ft_printf("ft -->%*.5d\n", 10, -111);
	// ft_printf("ft -->%*.5d\n", 10, -1011);
	// ft_printf("ft -->%*.10d\n", 20, -10011);
	// ft_printf("ft -->%*.10d\n", 20, -111011);
	// ft_putstr(ft_ulltoa_base(4294967295u, "0123456789abcdef"));
	// ft_putstr("\n");
	// ft_printf("m = [%x]\n", 4294967295u);
	// dprintf(1, "v = [%x]\n", 4294967295u);
	// ft_printf("m = [%p]\n",str);
	// dprintf(1, "v = [%p]\n",str);
	//ft_printf("m = [%*s]\n", -32, "42");
	//dprintf(1, "v = [%*s]\n", -32, "42");
	// ft_printf("m[%6s == *%p*]\n", "p", str);
	// dprintf(1, "v[%6s == *%p*]\n", "p", str);
	// ft_printf("m[%6s == *%*.*x*]\n", "*.*x", 10, 21, -10);
	// dprintf(1, "v[%6s == *%*.*x*]\n", "*.*x", 10, 21, -10);
	// ft_printf("m[%6s == *%*.*x*]\n", "*.*x", 10, 21, 101);
	// dprintf(1, "v[%6s == *%*.*x*]\n", "*.*x", 10, 21, 101);
	// ft_printf("m[%6s == *%*.*x*]\n", "*.*x", 10, 21, -101);
	// dprintf(1, "v[%6s == *%*.*x*]\n", "*.*x", 10, 21, -101);
	// ft_printf("m[%6s == *%*.*x*0]\n", "*.*x", 10, 21, -101);
	// dprintf(1, "v[%6s == *%*.*x*0]\n", "*.*x", 10, 21, -101);
	// ft_printf("m[%6s == *%*.*x*0]\n", "*.*x", 21, 10, -101);
	// dprintf(1, "v[%6s == *%*.*x*0]\n", "*.*x", 21, 10, -101);
	// ft_printf("m[%6s == *%0*.0x*0]\n", "0*.0x", -21, LONG_MAX);
	// dprintf(1, "v[%6s == *%0*.0lx*0]\n", "0*.0x", -21, LONG_MAX);
	// ft_printf("m[%6s == *%0*.10x*0]\n", "0*.10x", -21, LONG_MAX);
	// dprintf(1, "v[%6s == *%0*.10lx*0]\n", "0*.10x", -21, LONG_MAX);
	// ft_printf("m[%6s == (%1.1d)]\n", "1.1d", 0);
	// ft_printf("m[%6s == (%1.1d)]\n", "1.1d", 0);
	// dprintf(1, "v[%6s == (%1.1d)]\n", "1.1d", 0);
	// ft_printf("m[%6s == (%1.2d)]\n", "1.1d", 0);
	// dprintf(1, "v[%6s == (%1.2d)]\n", "1.1d", 0);
	// ft_printf("m[%6s == (%9.0d)]\n", "9.0d", UINT_MAX);
	// dprintf(1, "v[%6s == (%9.0d)]\n", "9.0d", UINT_MAX);
	// ft_printf("m[%6s == (%09.0d)]\n", "09.0d", UINT_MAX);
	// dprintf(1, "v[%6s == (%09.0d)]\n", "09.0d", UINT_MAX);
	// ft_printf("m[%6s == (%9.9d)]\n", "9.9d", UINT_MAX);
	// dprintf(1, "v[%6s == (%9.9d)]\n", "9.9d", UINT_MAX);
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