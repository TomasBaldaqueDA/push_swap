/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_two.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <toafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 15:39:09 by jose-fgu          #+#    #+#             */
/*   Updated: 2026/11/25 17:38:57 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sp_op(t_ps *ps, t_op_type op)
{
	if (op == SA)
		swap(&ps->a);
	if (op == SB)
		swap(&ps->b);
	if (op == SS)
	{
		swap(&ps->a);
		swap(&ps->b);
	}
	if (op == PA)
		push(&ps->a, &ps->b);
	if (op == PB)
		push(&ps->b, &ps->a);
}

static void	rot_op(t_ps *ps, t_op_type op)
{
	if (op == RA)
		rot(&ps->a);
	if (op == RB)
		rot(&ps->b);
	if (op == RR)
	{
		rot(&ps->a);
		rot(&ps->b);
	}
	if (op == RRA)
		revrot(&ps->a);
	if (op == RRB)
		revrot(&ps->b);
	if (op == RRR)
	{
		revrot(&ps->a);
		revrot(&ps->b);
	}
}

static void	add_op(t_ps *ps, t_op_type op)
{
	t_op	*new;

	new = malloc(sizeof(t_op));
	if (new == NULL)
		error_exit(ps);
	new->mov = op;
	new->next = NULL;
	if (ps->ops == NULL)
		ps->ops = new;
	else
		ps->last->next = new;
	ps->last = new;
}

void	apply_op(t_ps *ps, t_op_type op)
{
	if (op <= PB)
		sp_op(ps, op);
	else
		rot_op(ps, op);
}

void	do_op(t_ps *ps, t_op_type op)
{
	apply_op(ps, op);
	add_op(ps, op);
}
