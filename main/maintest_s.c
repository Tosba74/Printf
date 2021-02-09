/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:37:17 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/09 16:55:47 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	char	*str;

	str = "salut";
	printf("[%s == (%1s)]\n", "1s", str);
	printf("[%s == (%1s)]\n", "1s", "salut");
	printf("[%s == (%-3s)]\n", "-3s", str);
	printf("[%s == (%-3s)]\n", "-3s", "salut");
	printf("[%s == (%-7s)]\n", "-7s", str);
	printf("[%s == (%-7s)]\n", "-7s", "salut");
	printf("[%s == (%--7s)]\n", "--7s", str);
	printf("[%s == (%--7s)]\n", "--7s", "salut");
	printf("[%s == (%-.7s)]\n", "-.7s", str);
	printf("[%s == (%-.7s)]\n", "-.7s", "salut");
	printf("[%s == (%.15s)]\n", ".15s", str);
	printf("[%s == (%.15s)]\n", ".15s", "salut");
	printf("[%s == (%10.6s)]\n", "10.6s", str);
	printf("[%s == (%10.6s)]\n", "10.6s", "salut");
	printf("[%s == (%5.3s)]\n", "5.3s", str);
	printf("[%s == (%5.3s)]\n", "5.3s", "salut");
	printf("[%s == (%-5.3s)]\n", "-5.3s", str);
	printf("[%s == (%-5.3s)]\n", "-5.3s", "salut");
	printf("[%s == (%5.3s)]\n", "5.3s", str);
	printf("[%s == (%5.3s)]\n", "5.3s", "salut");
	printf("[%s == (%3.4s)]\n", "3.4s", str);
	printf("[%s == (%3.4s)]\n", "3.4s", "salut");
	return (0);
}
