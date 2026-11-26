/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-fgu <jose-fgu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 16:30:28 by jose-fgu          #+#    #+#             */
/*   Updated: 2026/11/26 17:37:31 by jose-fgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	bucket_move(t_ps *ps, int buck)
{
	int	limit;
	
	limit = buck;
	while(ps->a.len > 0)
	{
		while (ps->b.len <= limit)
		{
			if (ps->a.arr[0] < limit)
				do_op(ps, PB);
			else
				do_op(ps, RA);
		}
	}
	limit = limit + buck;
}

void	medium(t_ps *ps)
{
	int	buck;
	

	
	buck = sq_rt(ps->a.len);
	bucket_move(ps, buck);
	
	createbucket
	
	index_stack
}