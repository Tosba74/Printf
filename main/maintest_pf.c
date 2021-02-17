/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_pf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 22:44:09 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/14 17:40:43 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../libft/includes/libft.h"
# include "stdio.h"

int		ft_strlen1(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

int		pute(char *s)
{
	(void)s;
	write(1, "pute", 4);
	return(6);
}
/*
int		(*f(char *s))(char*)
{
	if (i == 1)
		return (&ft_putstr_len);
	else if (i == 2)
		retrun (&ft_strlen1);
}
*/
int		main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 1;
		int (*pf[])(char *s) = {&ft_putstr_len, &ft_strlen1, &pute};
		while (i != 4)
		{
			printf("%d => [%d]\n", i, pf[i - 1](av[1]));
			i++;
		}
		ft_putstr_len("\nFIN\n");
	}
	return (0);
}
