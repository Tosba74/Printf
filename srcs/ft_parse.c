/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:34:37 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/10 20:38:49 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_isvalue(char c)
{
	if (ft_isdigit(c) || c == '*')
		return (1);
	return (0);
}

int		ft_complet_value(int f, t_flags flags, char *format)
{
	int		i;

	i = 0;
	if (ft_isdigit(format[i]))
	{
		f = ft_atoi(format[i]);
		while (ft_isdigit(format[i]))
			i++;
	}
	else if (format)
	return(i);
}	

int		ft_parse(t_flags *flags, const char *format)
{
	int		i;

	i = 0;
	if (format[i] == '0' || format[i] == '-')
	{
		i++;
	}
	if (ft_isvalue(format[i]))
		i += ft_complet_value(flags->size ,flags, format);	
	if (format[i] == '.')
		i += ft_complet_value(flags->prec, flags, format);	ft_complet_value(format);	
	return (i);
}