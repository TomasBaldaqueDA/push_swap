/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <toafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 17:21:24 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/20 17:46:42 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_ps *ps)
{
	t_op	*tmp;

	free(ps->a.arr);
	free(ps->b.arr);
	while (ps->ops)
	{
		tmp = ps->ops->next;
		free(ps->ops);
		ps->ops = tmp;
	}
	ps->a.arr = NULL;
	ps->b.arr = NULL;
	ps->last = NULL;
}

void	error_exit(t_ps *ps)
{
	ft_putstr_fd("Error\n", 2);
	free_all(ps);
	exit(1);
}
