/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:55:20 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/02 16:56:06 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(dst);
	i = 0;
	if (size > j)
	{
		while (src[i] && j + i < size - 1)
		{
			dst[j + i] = src[i];
			i++;
		}
		dst[j + i] = '\0';
		return (j + ft_strlen(src));
	}
	else
		return (ft_strlen(src) + size);
}
