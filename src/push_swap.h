/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:49:23 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/04 15:19:25 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <limits.h>
#include "../libft/libft.h"

typedef struct s_stack
{
	int	value;
	int	index;
	struct s_stack	*next;
}	t_stack;

int	is_digit(char **av);
int	parsing(char **av);
char	**create_args(int ac, char **av);
char	**ft_split(const char *s, char c);
long	ft_atol(char *str);
void	init_stack(char **av, t_stack **stack);
void	push_to_a(t_stack **a, t_stack **b);
void	push_to_b(t_stack **b, t_stack **a);
void	rotate_a(t_stack **a);

#endif