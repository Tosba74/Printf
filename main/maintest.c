/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:37:17 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/02 23:24:20 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	int		nb;
	int		*ret;

	nb = -42;
	*ret = -nb;
	printf("%u", ret);
	
	
	// double	pi;
	// char	*str;

	// str = "salut";
	// pi = 3.141591654;
	// printf("[%s == (%3s)]\n", "3s", str);
	// printf("[%s == (%-3s)]\n", "-3s", str);
	// printf("[%s == (%.3s)]\n", ".3s", str);
	// printf("[%s == (%05.3s)]\n", "05.3s", "salut");
	// printf("[%s == (%5.3s)]\n", "5.3s", str);
	// printf("[%s == (%5.3s)]\n", "5.3s", str);
	// printf("[%s == (%3.5s)]\n", "3.5s", str);
	// printf("[%s == (%010f)]\n", "10f", pi);
	// printf("[%s == (%-10f)]\n", "-10f", pi);
	// printf("[%s == (%010.3f)]\n", "-10.3f", pi);
	// printf("[%s == (%3.5f)]\n", "3.5f", pi);
	// printf("[%s == (%-3f)]\n", "-3f", pi);
	// printf("[%s == (%-10s)]\n", "-10s", str);
	return (0);
}
