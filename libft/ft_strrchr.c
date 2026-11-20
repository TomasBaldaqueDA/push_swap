/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:55:20 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/02 16:56:06 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;
	char	*l;

	n = 0;
	l = NULL;
	while (s[n] != '\0')
	{
		if (s[n] == (char) c)
			l = ((char *)(s + n));
		n++;
	}
	if ((char) c == '\0')
		return ((char *)(s + n));
	else
		return (l);
}
