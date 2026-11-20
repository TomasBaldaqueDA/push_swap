/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:54:20 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/06 11:02:09 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	l;

	l = ft_strlen(s) + 1;
	d = malloc(l * sizeof(char));
	if (!d)
		return (NULL);
	ft_strlcpy(d, s, l);
	return (d);
}
