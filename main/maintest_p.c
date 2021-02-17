/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:37:17 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/15 10:51:03 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	int		num;

	num = -4321;
	printf("[%s == (%-3p)]\n", "-3p", num);
	printf("[%s == (%-3p)]\n", "-3p", num);
	printf("[%s == (%7p)]\n", "7p", num);
	printf("[%s == (%7p)]\n", "7p", num);
	printf("[%s == (%-7p)]\n", "-7p", num);
	printf("[%s == (%-7p)]\n", "-7p", num);
	printf("[%s == (%--7p)]\n", "--7p", num);
	printf("[%s == (%--7p)]\n", "--7p", num);
	printf("[%s == (%-.15p)]\n", "-.15p", num);
	printf("[%s == (%-.15p)]\n", "-.15p", num);
	printf("[%s == (%.15p)]\n", ".15p", num);
	printf("[%s == (%.15p)]\n", ".15p", num);
	printf("[%s == (%0.15p)]\n", "0.15p", num);
	printf("[%s == (%0.15p)]\n", "0.15p", num);
	printf("[%s == (%10.6p)]\n", "10.6p", num);
	printf("[%s == (%010.6p)]\n", "10.6p", num);
	printf("[%s == (%010.6p)]\n", "10.6p", num);
	printf("[%s == (%10.6p)]\n", "10.6p", num);
	printf("[%s == (%5.3p)]\n", "5.3p", num);
	printf("[%s == (%5.3p)]\n", "5.3p", num);
	printf("[%s == (%-7.3p)]\n", "-7.3p", num);
	printf("[%s == (%-7.3p)]\n", "-7.3p", num);
	printf("[%s == (%3.7p)]\n", "-3.7p", num);
	printf("[%s == (%3.7p)]\n", "-3.7p", num);
	printf("[%s == (%03.7p)]\n", "03.7p", num);
	printf("[%s == (%03.7p)]\n", "03.7p", num);
	return (0);
}
