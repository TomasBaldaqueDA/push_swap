/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-fgu <jose-fgu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:55:25 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/26 14:59:42 by jose-fgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	ps;

	ft_bzero(&ps, sizeof(t_ps));
	ps.strat = ADAPTIVE;
	if (!parse(&ps, argc, argv))
		return (0);
	if (is_sorted(&ps.a) == 0)
		//order();
	print_ops(&ps);
	free_all(&ps);
	return (0);
}
