/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/18 16:39:57 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_complet_all(int len, int fzero)
{
	char	*ret;
	char	replace;
	int		i;

	if (!(ret = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (fzero == 0)
		replace = ' ';
	else if (fzero == 1)
		replace = '0';
	i = -1;
	while (++i < len)
		ret[i] = replace;
	ret[len] = '\0';
	return (ret);
}

char	*ft_make_str(char *ret, char *s, t_flags flags)
{
	int		i;
	int		c;

	i = 0;
	if (flags.prec == 0)
		flags.prec = ft_strlen(s);
	if (flags.rev == 1)
		c = 0;
	else if (flags.rev == 0)
		c = ft_strlen(ret) - (ft_strlen(s) - flags.prec);
	while (s[i] && i < flags.prec)
		ret[c++] = s[i++];
	return (ret);
}

int		ft_print_str(t_flags flags)
{
	int		len;
	char	*ret;

	if (flags.size == -1)
		len = ft_strlen((char*)va_arg(flags.ap, char *));
	else
		len = flags.size;
	ret = ft_complet_all(len, flags.zero);
	ft_putstr(ret);
	ft_putchar('\n');
	ret = ft_make_str(ret, (char*)va_arg(flags.ap, char *), flags);
	ft_putstr(ret);
	free(ret);
	ft_init_flags(&flags);
	return (len);
}

int		ft_print_num(int n, t_flags flags)
{
	int		len;
	char	*ret;
	char	*tmp;

	ft_putnbr(n);
	if (flags.size >= 0)
		len = flags.size;
	else if (flags.size <= 0)
		len = ft_len_num(n, 10);
	if (!(ret = malloc(sizeof(char) * len) + 1))
		return (0);
	ret[len] = '\0';
	if (flags.zero == -1)
		ret = ft_complet_all(len, flags.zero);
	tmp = ft_itoa(n);
	if (flags.rev == 0)
		ret = ft_substr(tmp, len - ft_strlen(tmp), ft_strlen(tmp));
	else
		ret = ft_substr(tmp, 0, ft_strlen(tmp));
	ft_putstr(ret);
	ft_init_flags(&flags);
	return (len);
}

/*
int		ft_print_hex(int n, const char *base, t_flags flags)
{
	int		len;
	char	*ret;
	char	*tmp;

	if (flags.size >= 0)
		len = flags.size;
	else if (flags.size < 0)
		len = ft_len_num(n, 16) + 2;
	if (!(ret = malloc(sizeof(char) * len) + 1))
		return (0);
	if (flags.zero == -1)
		ret = ft_all_z(ret);
	tmp = ft_hexa(n, base);
	if (flags.neg == 0)
		ret = ft_substr(tmp, len - ft_strlen(tmp), len);
	else if (flags.neg == 1)
		ret = ft_substr(tmp, 2, ft_strlen(tmp));	
	ft_putstr(ret);
	return (len);
}
*/