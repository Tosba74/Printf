/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:37:17 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/15 10:52:36 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	int		num;

	num = -4321;
	printf("[%s == (%-3c)]\n", "-3c", num);
	printf("[%s == (%-3c)]\n", "-3c", num);
	printf("[%s == (%7c)]\n", "7c", num);
	printf("[%s == (%7c)]\n", "7c", num);
	printf("[%s == (%-7c)]\n", "-7c", num);
	printf("[%s == (%-7c)]\n", "-7c", num);
	printf("[%s == (%-.15c)]\n", "-.15c", num);
	printf("[%s == (%-.15c)]\n", "-.15c", num);
	printf("[%s == (%.15c)]\n", ".15c", num);
	printf("[%s == (%.15c)]\n", ".15c", num);
	printf("[%s == (%0.15c)]\n", "0.15c", num);
	printf("[%s == (%0.15c)]\n", "0.15c", num);
	printf("[%s == (%10.6c)]\n", "10.6c", num);
	printf("[%s == (%010.6c)]\n", "10.6c", num);
	printf("[%s == (%010.6c)]\n", "10.6c", num);
	printf("[%s == (%10.6c)]\n", "10.6c", num);
	printf("[%s == (%5.3c)]\n", "5.3c", num);
	printf("[%s == (%5.3c)]\n", "5.3c", num);
	printf("[%s == (%-7.3c)]\n", "-7.3c", num);
	printf("[%s == (%-7.3c)]\n", "-7.3c", num);
	printf("[%s == (%3.7c)]\n", "-3.7c", num);
	printf("[%s == (%3.7c)]\n", "-3.7c", num);
	printf("[%s == (%03.7c)]\n", "03.7c", num);
	printf("[%s == (%03.7c)]\n", "03.7c", num);
	return (0);
}
