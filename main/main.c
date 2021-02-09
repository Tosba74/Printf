/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:46:14 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/09 17:40:33 by bmangin          ###   ########lyon.fr   */
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
	// printf("1ALEXIS JE TAIME mais %-15.45s theo %-6s lavabo\n", str, "42");	
	// ft_printf("ALEXIS JE TAIME mais %-15.45s theo %-6s lavabo\n", str, "42");	
	printf("Jaime bien: |%*s| |%*s|\n", 5, "coucou", 5, "hey");
	ft_printf("Jaime bien: |%*s| |%*s|\n", 5, "coucou", 5, "hey");
	printf("[%s == (%1s)]\n", "1s", str);
	ft_printf("[%s == (%1s)]\n", "1s", str);
	ft_printf("[%s == (%-3s)]\n", "-3s", str);
	printf("[%s == (%-3s)]\n", "-3s", str);
	ft_printf("[%s == (%-7s)]\n", "-7s", str);
	printf("[%s == (%-7s)]\n", "-7s", str);
	ft_printf("[%s == (%--7s)]\n", "--7s", str);
	printf("[%s == (%--7s)]\n", "--7s", str);
	ft_printf("[%s == (%-.7s)]\n", "-.7s", str);
	printf("[%s == (%-.7s)]\n", "-.7s", str);
	ft_printf("[%s == (%.15s)]\n", ".15s", str);
	printf("[%s == (%.15s)]\n", ".15s", str);
	ft_printf("[%s == (%10.6s)]\n", "10.6s", str);
	printf("[%s == (%10.6s)]\n", "10.6s", str);
	ft_printf("[%s == (%5.3s)]\n", "5.3s", str);
	printf("[%s == (%5.3s)]\n", "5.3s", str);
	ft_printf("[%s == (%-5.3s)]\n", "-5.3s", str);
	printf("[%s == (%-5.3s)]\n", "-5.3s", str);
	ft_printf("[%s == (%5.3s)]\n", "5.3s", str);
	printf("[%s == (%5.3s)]\n", "5.3s", str);
	ft_printf("[%s == (%3.4s)]\n", "3.4s", str);
	printf("[%s == (%3.4s)]\n", "3.4s", str);
	return (0);
}