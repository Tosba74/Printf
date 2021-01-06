/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:02:40 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/06 19:01:02 by bmangin          ###   ########lyon.fr   */
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
int				ft_isconvert(char c);
int				ft_isflags(char c);
void			ft_init_flags(char format, t_flags *flags);
void			ft_init_struct(t_flags *flags);
void			ft_print_struct(t_flags *flags);

#endif