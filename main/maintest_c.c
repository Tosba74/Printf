/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:37:17 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/02 19:14:05 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	int		num;

	num = 48;
	printf("[%6s == (%7c)]\n", "7c", num);
	printf("[%6s == (%7c)]\n", "7c", num);
	printf("[%6s == (%-7c)]\n", "-7c", num);
	printf("[%6s == (%-7c)]\n", "-7c", num);
	return (0);
}
