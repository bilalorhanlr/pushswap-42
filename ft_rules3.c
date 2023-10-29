/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilalorhanlar <bilalorhanlar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:56:41 by bilalorhanl       #+#    #+#             */
/*   Updated: 2023/10/29 15:56:42 by bilalorhanl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"push_swap.h"

void	ft_rotate_ab(t_value *s0)
{
	ft_rotate_b(s0);
	ft_rotate_a(s0);
}

// void controller(t_value *s0)
// {
// 	int i;

// 	i = 0;
// 	while (s0->a[i] == s0->d[i])
// 	{
// 		i++;
// 	}
// 	if (i == s0->argsa)
// 	{
// 		exit(0);
// 	}
// }