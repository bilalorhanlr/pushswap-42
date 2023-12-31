/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilalorhanlar <bilalorhanlar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:56:37 by bilalorhanl       #+#    #+#             */
/*   Updated: 2023/10/29 15:56:38 by bilalorhanl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"push_swap.h"

void	ft_rev_rotate_a(t_value *s0)
{
	int	d;

	if (s0->argsa <= 1)
	{
		return ;
	}
	d = s0->a[s0->argsa -1];
	ft_memmove(s0->a +1, s0->a, s0->argsa * 4);
	s0->a[0] = d;
	write(1, "rra\n", 4);
}

void	ft_rev_rotate_b(t_value *s0)
{
	int	d ;

	if (s0->argsb <= 1)
	{
		return ;
	}
	d = s0->b[s0->argsb -1];
	ft_memmove(s0->b +1, s0->b, s0->argsb * 4);
	s0->b[0] = d;
	write(1, "rrb\n", 4);
}

void	ft_rev_rotate_ab(t_value *s0)
{
	ft_rev_rotate_a(s0);
	ft_rev_rotate_b(s0);
}

void	ft_rotate_a(t_value *s0)
{
	int	d ;

	d = s0->a[0];
	ft_memmove(s0->a, s0->a +1, s0->argsa * 4);
	s0->a[s0->argsa -1] = d;
	write(1, "ra\n", 3);
}

void	ft_rotate_b(t_value *s0)
{
	int	d;

	if (s0->argsb <= 1)
	{
		return ;
	}
	d = s0->b[0];
	ft_memmove(s0->b, s0->b +1, s0->argsb * 4);
	s0->b[s0->argsb -1] = d;
	write(1, "rb\n", 3);
}
