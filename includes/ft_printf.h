/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:02:40 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/05 18:14:56 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/includes/libft.h"

typedef	struct	s_flag
{
	int 		size;
	int			zero
	int			neg;
    int			pres;
    int			star;
}				t_flag;

int	            ft_printf(const char *format, ...)
				__attribute__((format(printf,1,2)));
int				ft_isconvert(char c);
int				ft_isflags(char c);


#endif
