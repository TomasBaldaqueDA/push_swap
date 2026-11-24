/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-fgu <jose-fgu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:44:21 by jose-fgu          #+#    #+#             */
/*   Updated: 2026/11/24 17:29:53 by jose-fgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ab_stack(t_ps *ps, int cap)
{
	ps->a.arr = malloc(cap * sizeof(int));
	if (ps->a.arr = NULL)
		error_exit(ps);
	ps->b.arr = malloc(cap * sizeof(int));
	if (ps->b.arr = NULL)
		error_exit(ps);
	ps->a.cap = cap;
	ps->b.cap = cap;
	ps->a.len = 0;
	ps->b.len = 0;
}

void	stack_filler(t_ps *ps, int argc, char **agrv, int start)
{
	int	i;
	int	*n;

	i = start;
	while (i < argc)
	{
		if (atoi_safe(agrv[i], &n) == 0)
			error_exit(ps);
		ps->a.arr[i - start] = n;
		i++;
	}
	ps->a.len = argc - start;
}

int	dupe_check(t_stack *s)
{
	int	i;
	int	j;

	i = 0;
	while (i < s->len)
	{
		j = i + 1;
		while (j < s->len)
		{
			if (s->arr[i] == s->arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
