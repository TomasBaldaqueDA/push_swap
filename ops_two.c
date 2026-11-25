/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_two.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-fgu <jose-fgu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 15:39:09 by jose-fgu          #+#    #+#             */
/*   Updated: 2026/11/25 16:59:56 by jose-fgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void sp_op(t_ps *ps, t_op_type op)
{
	if (op == SA)
		swap(&ps->a);
	if (op == SB)
		swap(&ps->b);
	if(op == SS)
	{
		swap(&ps->a);
		swap(&ps->b);
	}
	if (op == PA)
		push(&ps->a, &ps->b);
	if (op == PB)
		push(&ps->b, &ps->a);
}
static void rot_op(t_ps *ps, t_op_type op)
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
		rot(&ps->a);
		rot(&ps->b);
	}
}
void	do_op(t_ps *ps, t_op_type op)
{
	if (op == SA || op == SB || op == SS ||op == PA || op == PB)
		sp_op(ps, op);
	if (op == RA || op == RB || op == RR ||op == RRA || op == RRB || op == RRR)
		rot_op(ps, op);
}
