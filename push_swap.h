/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:10:48 by igama             #+#    #+#             */
/*   Updated: 2024/04/21 11:41:54 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libraries/libft/libft.h"
# include "libraries/ft_printf/ft_printf.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				index;
	int				data;
	struct s_list	*next;
}		t_list;

void	sa(t_list **list);
void	sb(t_list **list);
void	ss(t_list **list_a, t_list **list_b);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	ra(t_list **list);
void	rb(t_list **list);
void	rr(t_list **list_a, t_list **list_b);
void	rra(t_list **list);
void	rrb(t_list **list);
void	rrr(t_list **list_a, t_list **list_b);
void	one_to_five(t_list **list_a, t_list **list_b);
void	op_3(t_list **list, int index_mod);
void	op_4(t_list **list_a, t_list **list_b);
void	op_5(t_list **list_a, t_list **list_b);
void	add_into_beginning(t_list **list, int num, int index);
void	add_into_ending(t_list **list, int num, int index);
void	node_to_ending(t_list **list);
t_list	*node_remover(t_list **list);
void	node_to_beginning(t_list **list);
void	index_maker(t_list **list);
void	printer(t_list *list);
t_list	*list_maker(char **old_list);
void	ft_print_stack(t_list *stack);
int		ft_stack_size(t_list **list);
int		ft_is_sorted(t_list **list);
int		arg_error(char **arg_list);
void	more_than_five(t_list **list_a, t_list **list_b);
void	radix(t_list **list_a, t_list **list_b, int dif);
int		same_number(t_list **list_a, t_list **list_b);
void	free_stack(t_list *list);
int		ft_is_inverted(t_list **list);
void	sort(t_list **list_a, t_list **list_b);
int		check_all_limits(int argc, char **argv);

#endif
