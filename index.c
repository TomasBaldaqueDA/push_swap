/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <toafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 16:16:39 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/26 16:43:49 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_smaller(t_stack *s, int value)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < s->len)
	{
		if (s->arr[i] < value)
			count++;
		i++;
	}
	return (count);
}

void	index_stack(t_ps *ps)
{
	int	i;
	int	*arr_aux;

	arr_aux = malloc(ps->a.len * sizeof(int));
	if (arr_aux == NULL)
		error_exit(ps);
	i = 0;
	while (i < ps->a.len)
	{
		arr_aux[i] = count_smaller(&ps->a, ps->a.arr[i]);
		i++;
	}
	i = 0;
	while (i < ps->a.len)
	{
		ps->a.arr[i] = arr_aux[i];
		i++;
	}
	free(arr_aux);
}
