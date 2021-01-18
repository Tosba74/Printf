/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:37:17 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/17 13:28:06 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	double	pi;
	char 	*str;

	str = "salut";
	pi = 3.141591654;
	printf("[%s == (%-3d)]\n", "-3d", 1);
	printf("[%s == (%10.3s)]\n", "10s", str);
	printf("[%s == (%07s)]\n", "0*s", str);
	printf("[%s == (%-*.*f)]\n", "-*.*f", 5, 2, pi);
	printf("[%s == (%010f)]\n", "10f", pi);
	printf("[%s == (%-10f)]\n", "-10f", pi);
	printf("[%s == (%010.3f)]\n", "-10.3f", pi);
	printf("[%s == (%3.5f)]\n", "3.5f", pi);
	printf("[%s == (%-3f)]\n", "-3f", pi);
	printf("[%s == (%-10s)]\n", "-10s", str);
	return (0);
}
