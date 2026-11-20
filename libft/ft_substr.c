/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:28:30 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/06 11:50:07 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	ls;
	char	*res;
	char	*source;
	size_t	newlen;

	if (!s)
		return (NULL);
	ls = ft_strlen(s);
	if (ls < (size_t)start)
		return (ft_strdup(""));
	source = (char *)s + start;
	if (ft_strlen(source) < len)
		newlen = ft_strlen(source) + 1;
	else
		newlen = len + 1;
	res = malloc(newlen * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, source, newlen);
	return (res);
}
