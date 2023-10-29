/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilalorhanlar <bilalorhanlar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:57:08 by bilalorhanl       #+#    #+#             */
/*   Updated: 2023/10/29 15:57:11 by bilalorhanl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_value
{
	int	*b;
	int	*a;
	int	argsa;
	int	argsb;
	int	*d;
	int	d_value;
	int	yak_value;
	int	doldur_a;
}	t_value;

void	ft_swap_a(t_value *s0);

void	ft_swap_b(t_value *s0);

void	ft_swap_ab(t_value *s0);

void	ft_push_a(t_value *s0);

void	ft_push_b(t_value *s0);

void	ft_rotate_a(t_value *s0);

void	ft_rotate_b(t_value *s0);

void	ft_rotate_ab(t_value *s0);

void	ft_rotate_ab(t_value *s0);

void	ft_rev_rotate_a(t_value *s0);

void	ft_rev_rotate_b(t_value *s0);

void	ft_rev_rotate_ab(t_value *s0);

void	controller(t_value *s0);

void	posision_up(t_value *s0, int c);

void	posision_down(t_value *s0, int b);

void	ft_start(t_value *s0);

void	chose_other(t_value *s0);

void	isfive(t_value *s0);

int		posision_start(t_value *s0, int k);

int		position_start(t_value *s0);

void	b_pus(t_value *s0, int arg1);

int		a_da_varmi(t_value *s0, int arg);

void	series_loading_choise(int args, char **argv, t_value *s0);

size_t	w_c(char const *s, char c);

void	dizi_doldurma(char **argv, t_value *s0, int i);

void	dizi_doldurma1(char **argv, t_value *s0, int d);

int		bak(char *arg, char c);

int		arg_say(int args, char **argv, t_value *s0);

void	insertion(int array[], int size);

void	ft_start_struct(t_value *s0);

void	ft_exit(char *argv);

void	ft_exit2(long int d);

void	ft_exit3(t_value *s0);

#endif
