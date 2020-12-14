/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:02:40 by bmangin           #+#    #+#             */
/*   Updated: 2020/12/14 18:54:16 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef	struct	s_flag
{
	char		mod;
	int			v;

}				t_flag;

int				ft_printf(const char *format, ...)
                __attribute__((format(printf,1,2)));
size_t			ft_strlen(char *s);
int				ft_putchar(char c);
int				ft_putstr(char *s);
int				ft_putnbr(int n);
int				ft_putnbr_base_xmin(int n);
int				ft_putnbr_base_xmax(int n);

#endif