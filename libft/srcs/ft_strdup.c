/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:59:38 by bmangin           #+#    #+#             */
/*   Updated: 2020/12/08 23:04:15 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	size;

	size = ft_strlen(s1);
	if (!(dst = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_memcpy(dst, s1, size + 1);
	return (dst);
}
