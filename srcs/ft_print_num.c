/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:50:50 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/13 12:19:34 by bmangin          ###   ########lyon.fr   */
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

char	*ft_make_str(char *ret, char *s, int i, int fneg)
{
	int		c;

	c = -1;
	ft_putstr(ret);
	ft_putchar('\n');
	ft_putstr(s);
	ft_putchar('\n');
	if (fneg == 0)
	{
		while (*s && ret[i])
			ret[i++] = *s++;
		ft_putchar('0');
	}
	else if (fneg == 1)
	{
		while (s[++c])
			ret[c] = s[c];	
		ft_putchar('1');
	}
	ft_putstr(ret);
	ft_putchar('\n');
	return(ret);
	
}

int		ft_print_str(char *s, t_flags flags)
{
	int		i;
	int		len;
	char	*ret;

	ft_prints(&flags);
	if (flags.size >= 0)
		len = flags.size;
	else if (flags.size < 0)
		len = ft_strlen(s);
	ret = ft_complet_all(len, flags.zero);
	i = len - ft_strlen(s);
	ft_putstr("i == ");
	ft_putnbr(i);
	ft_putchar('\n');
	ret = ft_make_str(ret, s, i, flags.neg);
	ft_putstr(ret);
	ft_putchar('\n');
	
	/*
	if (!(ret = malloc(sizeof(char) * len + 1)))
		return (0);
	ret[len] = '\0';
	if (flags.zero == -1)
		ret = ft_all_z(ret);
	if (flags.neg == 0)
		ret = ft_substr(s, len - ft_strlen(s) + 1, ft_strlen(s));
	else
		ret = ft_substr(s, 0, ft_strlen(s));
	*/
	ft_putstr(ret);
	ft_putchar('\n');
	return (len);
}

int		ft_print_num(int n, t_flags flags)
{
	int		len;
	char	*ret;
	char	*tmp;

	ft_prints(&flags);
	ft_putnbr(n);
	if (flags.size >= 0)
		len = flags.size;
	else if (flags.size <= 0)
		len = ft_len_num(n, 10);
	if (!(ret = malloc(sizeof(char) * len) + 1))
		return (0);
	ret[len] = '\0';
	if (flags.zero == -1)
		ret = ft_all_z(ret);
	tmp = ft_itoa(n);
	if (flags.neg == 0)
		ret = ft_substr(tmp, len - ft_strlen(tmp), ft_strlen(tmp));
	else
		ret = ft_substr(tmp, 0, ft_strlen(tmp));	
	ft_putstr(ret);
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