/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toafonso <toafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 14:47:01 by toafonso          #+#    #+#             */
/*   Updated: 2026/11/25 17:38:08 by toafonso         ###   ########.fr       */
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
int		read_flags(t_ps *ps, int argc, char **argv);
int		is_flag(char *argv);
int		dupe_check(t_stack *s);
void	stack_filler(t_ps *ps, int argc, char **argv, int start);
void	ab_stack(t_ps *ps, int cap);
int		parse(t_ps *ps, int argc, char **argv);
void	swap(t_stack *s);
void	push(t_stack *dst, t_stack *src);
void	rot(t_stack *s);
void	revrot(t_stack *s);
void	apply_op(t_ps *ps, t_op_type op);
void	do_op(t_ps *ps, t_op_type op);

#endif
