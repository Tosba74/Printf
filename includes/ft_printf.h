/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:02:40 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/14 17:15:07 by bmangin          ###   ########lyon.fr   */
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
	va_list		ap;
	int 		size;
	int			zero;
	int			rev;
	int			prec;
	int			length;
	char		spec;
}				t_flags;

int	            ft_printf(const char *format, ...)
				__attribute__((format(printf,1,2)));
int				ft_isconvert(char c);
int				ft_isvalue(char c);
int				ft_print_char(t_flags *flags);
int				ft_print_str(t_flags *flags);
int				ft_print_ptr(t_flags *flags);
int				ft_print_num(t_flags *flags);
int				ft_print_hexa(t_flags *flags);
int				ft_print_u(t_flags *flags);
char			*ft_get_base(char c);
void			ft_print_and_clean(t_flags *flags, char *s, int size);
size_t			ft_check_len(t_flags *flags, char *s);
/*
**	TEST
*/
void			ft_prints(t_flags *flags);

#endif