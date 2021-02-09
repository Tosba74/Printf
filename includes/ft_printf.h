/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:02:40 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/09 17:43:00 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/includes/libft.h"

typedef	struct		s_flags
{
	va_list			ap;
	unsigned int	size;
	int				zero;
	int				rev;
	unsigned int	prec;
	int				star;
	int				length;
	char			spec;
}					t_flags;

int		            ft_printf(const char *format, ...)
					__attribute__((format(printf,1,2)));
int 				ft_init_format(t_flags *flags, const char *format);
void				ft_init_flags(t_flags *flags);
int					ft_isconvert(char c);
int					ft_isflags(char c);
int					ft_print_str(t_flags flags, char *s);
int					ft_print_num(int n, t_flags flags);
int					ft_print_hex(int n, const char *base, t_flags flags);
/*
**	TEST
*/
void				ft_prints(t_flags *flags);

#endif