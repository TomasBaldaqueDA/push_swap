/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <toafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 14:13:02 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/26 14:40:50 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *s)
{
	int	i;

	i = 0;
	while (i < s->len - 1)
	{
		if (s->arr[i] > s->arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	print_ops(t_ps *ps)
{
	char	*name_ops[11];
	t_op	*aux;

	aux = ps->ops;
	name_ops[SA] = "sa";
	name_ops[SB] = "sb";
	name_ops[SS] = "ss";
	name_ops[PA] = "pa";
	name_ops[PB] = "pb";
	name_ops[RA] = "ra";
	name_ops[RB] = "rb";
	name_ops[RR] = "rr";
	name_ops[RRA] = "rra";
	name_ops[RRB] = "rrb";
	name_ops[RRR] = "rrr";
	while (aux != NULL)
	{
		ft_putendl_fd(name_ops[aux->mov], 1);
		aux = aux->next;
	}
}
