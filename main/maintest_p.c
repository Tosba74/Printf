/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:37:17 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/23 14:11:42 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "../includes/ft_printf.h"
#include "../libft/includes/libft.h"

int		main(void)
{
	char	*str;
	void	*num;
	
	str = malloc(sizeof(char)* 6);
	str[0] = 's';
	str[1] = 'a';
	str[2] = 'l';
	str[3] = 'u';
	str[4] = 't';
	str[5] = '\0';
	num = (void*)str;
	printf("[%6s == (%5p)]\n", "5p", num);
	printf("[%6s == (%-3p)]\n", "-3p", num);
	printf("[%6s == (%15p)]\n", "15p", num);
	printf("[%6s == (%15p)]\n", "15p", num);
	printf("[%6s == (%-15p)]\n", "-15p", num);
	printf("[%6s == (%-15p)]\n", "-15p", num);
	printf("[%6s == (%--15p)]\n", "--15p", num);
	printf("[%6s == (%-.15p)]\n", "--15p", num);
	// printf("[%6s == (%-.15p)]\n", "-.15p", num);
	// printf("[%6s == (%-.15p)]\n", "-.15p", num);
	// printf("[%6s == (%.15p)]\n", ".15p", num);
	// printf("[%6s == (%.15p)]\n", ".15p", num);
	// printf("[%6s == (%0.15p)]\n", "0.15p", num);
	// printf("[%6s == (%0.15p)]\n", "0.15p", num);
	// printf("[%6s == (%10.6p)]\n", "10.6p", num);
	// printf("[%6s == (%010.6p)]\n", "10.6p", num);
	// printf("[%6s == (%010.6p)]\n", "10.6p", num);
	// printf("[%6s == (%10.6p)]\n", "10.6p", num);
	// printf("[%6s == (%5.3p)]\n", "5.3p", num);
	// printf("[%6s == (%5.3p)]\n", "5.3p", num);
	// printf("[%6s == (%-7.3p)]\n", "-7.3p", num);
	// printf("[%6s == (%-7.3p)]\n", "-7.3p", num);
	// printf("[%6s == (%3.7p)]\n", "-3.7p", num);
	// printf("[%6s == (%3.7p)]\n", "-3.7p", num);
	// printf("[%6s == (%03.7p)]\n", "03.7p", num);
	// printf("[%6s == (%03.7p)]\n", "03.7p", num);
	return (0);
}
