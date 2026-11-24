/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_safe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <toafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 17:54:00 by jose-fgu          #+#    #+#             */
/*   Updated: 2026/11/24 14:11:57 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	atoi_safe(const char *str, int *out)
{
	int		i;
	int		sig;
	long	r;

	i = 0;
	sig = 1;
	r = 0;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sig = -sig;
	if (!ft_isdigit(str[i]))
		return (0);
	while (ft_isdigit(str[i]))
	{
		r = (r * 10) + str[i] - '0';
		if ((r * sig) > INT_MAX || (r * sig) < INT_MIN)
			return (0);
		i++;
	}
	*out = r * sig;
	return (str[i] == '\0');
}
