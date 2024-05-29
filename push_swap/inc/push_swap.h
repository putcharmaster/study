/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <sanhwang@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:40:30 by sanhwang          #+#    #+#             */
/*   Updated: 2024/05/28 19:18:59 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

int	valid_input(int ac, char **av);
void	split_av(char **av, t_stack **a_head);
void	add_n_to_back(n, a_head);
void	free_av();
int	is_sorted();
void	algo();
void	free_stack();
int	ft_atoi();

#endif
