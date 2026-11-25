/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_one.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <toafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 15:35:45 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/25 17:01:06 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *s)
{
	int	temp;

	if (s->len < 2)
		return ;
	temp = s->arr[0];
	s->arr[0] = s->arr[1];
	s->arr[1] = temp;
}

void	push(t_stack *dst, t_stack *src)
{
	int	temp;
	int	i;

	i = dst->len;
	if (src->len < 1)
		return ;
	temp = src->arr[0];
	while (i >= 1)
	{
		dst->arr[i] = dst->arr[i - 1];
		i--;
	}
	dst->arr[0] = temp;
	while (i < src->len - 1)
	{
		src->arr[i] = src->arr[i + 1];
		i++;
	}
	src->len--;
	dst->len++;
}

void	rot(t_stack *s)
{
	int	temp;
	int	i;

	if (s->len < 2)
		return ;
	temp = s->arr[0];
	i = 0;
	while (i < s->len - 1)
	{
		s->arr[i] = s->arr[i + 1];
		i++;
	}
	s->arr[i] = temp;
}

void	revrot(t_stack *s)
{
	int	temp;
	int	i;

	if (s->len < 2)
		return ;
	i = s->len - 1;
	temp = s->arr[i];
	while (i >= 1)
	{
		s->arr[i] = s->arr[i - 1];
		i--;
	}
	s->arr[i] = temp;
}
