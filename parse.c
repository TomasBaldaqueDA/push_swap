/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <toafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 15:09:13 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/24 17:40:32 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_flag(char *argv)
{
	int		k;
	char	*flags[6];

	flags[0] = "simple";
	flags[1] = "medium";
	flags[2] = "complex";
	flags[3] = "adaptive";
	flags[4] = "bench";
	flags[5] = NULL;
	k = 0;
	if (argv[0] == '-' && argv[1] == '-')
	{
		while (flags[k] != NULL)
		{
			if (ft_strncmp(flags[k], argv + 2, 9) == 0)
				return (1);
			k++;
		}
	}
	return (0);
}

static void	which_strat(t_ps *ps, const char *argv)
{
	if (ft_strncmp(argv, "--simple", 9) == 0)
		ps->strat = SIMPLE;
	if (ft_strncmp(argv, "--medium", 9) == 0)
		ps->strat = MEDIUM;
	if (ft_strncmp(argv, "--complex", 10) == 0)
		ps->strat = COMPLEX;
	if (ft_strncmp(argv, "--adaptive", 11) == 0)
		ps->strat = ADAPTIVE;
}

int	read_flags(t_ps *ps, int argc, char **argv)
{
	int	i;
	int	nmb_strat;

	i = 1;
	nmb_strat = 0;
	while (i < argc && is_flag(argv[i]))
	{
		if (ft_strncmp(argv[i], "--bench", 9) == 0)
			ps->bench = 1;
		else
		{
			nmb_strat++;
			if (nmb_strat > 1)
				error_exit(ps);
			which_strat(ps, argv[i]);
		}
		i++;
	}
	return (i);
}

int	parse(t_ps *ps, int argc, char **argv)
{
	int	start;

	start = read_flags(ps, argc, argv);
	if (start == argc)
		return (0);
	ab_stack(ps, argc - start);
	stack_filler(ps, argc, argv, start);
	if (dupe_check(&ps->a))
		error_exit(ps);
	return (1);
}
