/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/13 12:03:00 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_trash_user(t_flags *flags)
{
	(void)flags;
	return (0);
}

static int	ft_size_str(t_flags *flags, int var)
{
	int		size;

	if (flags->size != -1)
		size = flags->size;
	else
		size = 0;
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
	out = NULL;
	if (ft_norm_all((void *)&out, (size + 1), sizeof(char)))
		return (NULL);
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

int	ft_print_str(t_flags *flags)
{
	int		size;
	int		len;
	char	*s;
	char	*out;

	s = (char *)va_arg(flags->ap, char *);
	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	if (-1 < flags->prec && flags->prec < len)
	{
		size = ft_size_str(flags, flags->prec);
		out = ft_reverse_str(*flags, s, size, flags->prec);
	}
	else
	{
		size = ft_size_str(flags, len);
		out = ft_reverse_str(*flags, s, size, len);
	}
	ft_print_and_clean(flags, out, size);
	return (ft_strlen(out));
}

int	ft_print_char(t_flags *flags)
{
	int		i;
	int		size;
	char	c;
	char	*out;

	i = 0;
	size = ft_size_str(flags, 1);
	out = NULL;
	if (flags->spec == 'c')
		c = (unsigned char)va_arg(flags->ap, int);
	else if (flags->spec == '%')
		c = '%';
	if (ft_norm_all((void *)&out, (size + 1), sizeof(char)))
		return (0);
	while (i < size)
		out[i++] = (char)flags->zero;
	out[i] = '\0';
	if (flags->rev == 1)
		out[0] = c;
	else if (flags->rev == 0)
		out[size - 1] = c;
	ft_print_and_clean(flags, out, size);
	return (size);
}
