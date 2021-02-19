/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:37:17 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/16 22:22:28 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	int		num;

	num = -4242;
	printf("[%6s == (%10d)]\n", "10d", num);
	printf("[%6s == (%10d)]\n", "10d", num);
	printf("[%6s == (%010d)]\n", "010d", num);
	printf("[%6s == (%010d)]\n", "010d", num);
	printf("[%6s == (%-10d)]\n", "-10d", num);
	printf("[%6s == (%-10d)]\n", "-10d", num);
	printf("[%6s == (%--10d)]\n", "--10d", num);
	printf("[%6s == (%--10d)]\n", "--10d", num);
	printf("[%6s == (%-10.6d)]\n", "-10.6d", num);
	printf("[%6s == (%-10.6d)]\n", "-10.6d", num);
	printf("[%6s == (%10.6d)]\n", "10.6d", num);
	printf("[%6s == (%10.6d)]\n", "10.6d", num);
	printf("[%6s == (%010.6d)]\n", "010.6d", num);
	printf("[%6s == (%010.6d)]\n", "010.6d", num);
	printf("[%6s == (%6.10d)]\n", "6.10d", num);
	printf("[%6s == (%6.10d)]\n", "6.10d", num);
	printf("[%6s == (%-6.10d)]\n", "-6.10d", num);
	printf("[%6s == (%-6.10d)]\n", "-6.10d", num);
	printf("[%6s == (%-.10d)]\n", "-.10d", num);
	printf("[%6s == (%-.10d)]\n", "-.10d", num);
	printf("[%6s == (%.10d)]\n", ".10d", num);
	printf("[%6s == (%.10d)]\n", ".10d", num);
	printf("[%6s == (%5.3d)]\n", "5.3d", num);
	printf("[%6s == (%5.3d)]\n", "5.3d", num);
	printf("[%6s == (%-7.3d)]\n", "-7.3d", num);
	printf("[%6s == (%-7.3d)]\n", "-7.3d", num);
	printf("[%6s == (%3.7d)]\n", "-3.7d", num);
	printf("[%6s == (%3.7d)]\n", "-3.7d", num);
	printf("[%6s == (%03.7d)]\n", "03.7d", num);
	printf("[%6s == (%03.7d)]\n", "03.7d", num);
	return (0);
}
