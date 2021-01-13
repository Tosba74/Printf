/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:02:40 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/10 14:14:04 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/includes/libft.h"

typedef	struct	s_flags
{
	int 		size;
	int			zero;
	int			neg;
    int			pres;
    int			star;
}				t_flags;

int	            ft_printf(const char *format, ...)
				__attribute__((format(printf,1,2)));
int				ft_print_format(const char *format, va_list ap);
int				ft_isconvert(char c);
int				ft_isflags(char c);
int				ft_print_str(char *s, t_flags flags);
int				ft_print_num(int n, t_flags flags);
int				ft_print_hex(int n, const char *base, t_flags flags);
char			*ft_all_z(char *s);
void			ft_init_flags(const char format, t_flags *flags);
t_flags			*ft_init_struct(t_flags *flags);
/*
**	TEST
*/
void			ft_prints(t_flags *flags);

#endif