/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-fgu <jose-fgu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 15:14:20 by jose-fgu          #+#    #+#             */
/*   Updated: 2026/11/26 16:00:44 by jose-fgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple_strat(t_ps *ps)
{
	int	pos_min;

	while (ps->a.len != 0)
	{
		pos_min = find_imin(&ps->a);
		if (pos_min <= ps->a.len / 2)
			while (pos_min > 0)
			{
				do_op(ps, RA);
				pos_min--;
			}
		else
			while (pos_min < ps->a.len)
			{
				do_op(ps, RRA);
				pos_min++;
			}
		do_op(ps, PB);
	}
	while (ps->b.len != 0)
		do_op(ps, PA);
}
