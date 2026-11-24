/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <toafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 14:47:01 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/24 14:48:40 by toafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>

typedef enum e_op
{
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR
}	t_op_type;

typedef enum e_strat
{
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE
}	t_strat;

typedef struct s_stack
{
	int	*arr;
	int	len;
	int	cap;
}	t_stack;

typedef struct s_op
{
	t_op_type	mov;
	struct s_op	*next;
}	t_op;

typedef struct s_ps
{
	t_stack	a;
	t_stack	b;
	t_op	*ops;
	t_op	*last;
	t_strat	strat;
	int		bench;
	double	disorder;
}	t_ps;

void	free_all(t_ps *ps);
void	error_exit(t_ps *ps);
int		atoi_safe(const char *str, int *out);

#endif
