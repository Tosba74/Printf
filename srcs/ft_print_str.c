/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/02 17:01:54 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_size_str(t_flags flags, char *s, int var)
{
	int		size;
	
	size = flags.size;
	if (size < var)
		size = var;
	return (size);	
}

static char	*ft_reverse_str(t_flags flags, char *s, int size, int var)
{
	int		i;
	int		len;
	char	*out;
	
	i = 0;
	len = ft_strlen(s);
	if (!(out = malloc(sizeof(char) * size + 1)))
		return (NULL);
	out[size] = '\0';
	if (var < 0)
		var = -var;
	while (i < size)
		out[i++] = ' ';
	if (size == len && flags.prec == -1)
		ft_memcpy(out, s, var);
	else if (flags.rev == 1)
		ft_memcpy(out, s, var);
	else if (flags.rev == 0)
		ft_memcpy(out + (size - var), s, var);	
	return (out);
}

int			ft_print_str(t_flags *flags)
{
	int		size;
	int		len;
	char	*s;
	char	*out;

	s = (char*)va_arg(flags->ap, char *);
	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	if (-1 < flags->prec && flags->prec < len)
	{
		size = ft_size_str(*flags, s, flags->prec);
		out = ft_reverse_str(*flags, s, size, flags->prec);
	}
	else
	{
		size = ft_size_str(*flags, s, len);
		out = ft_reverse_str(*flags, s, size, len);
	}
	ft_print_and_clean(flags, out);
	return (ft_strlen(out));
}

int		ft_print_char(t_flags *flags)
{
	int len = 0;
	char *out;
	ft_putstr("Salut je suis un char\n");
	(void)va_arg(flags->ap, int);
	ft_print_and_clean(flags, out);
	return (len);
	
}
