/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <toafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:55:25 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/24 17:49:29 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	ps;
	//int	i;

	ft_bzero(&ps, sizeof(t_ps));
	ps.strat = ADAPTIVE;
	if (!parse(&ps, argc, argv))
		return (0);
	/*i = 0;
	while (i < ps.a.len)
	{
		ft_putnbr_fd(ps.a.arr[i], 1);
		ft_putchar_fd(' ', 1);
		i++;
	}
	ft_putchar_fd('\n', 1);*/
	free_all(&ps);
	return (0);
}
