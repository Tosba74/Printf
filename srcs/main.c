/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:46:14 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/09 13:13:04 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int main(void)
{
	double pi;
	
	pi = 3.141591654;
	printf("ALEXIS JE TAIME mais tu %0*d\n theo lavabo", 42, 42);	
	ft_printf("ALEXIS JE TAIME mais tu%0*d\n theo lavabo", 42, 42);	
	return (0);
}
