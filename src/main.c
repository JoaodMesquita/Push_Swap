/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpmesquita <jpmesquita@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 10:26:36 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/10 18:40:49 by jpmesquita       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**new_av;

	a = NULL;
	b = NULL;
	if (ac < 2 || (ac == 2 && av[1][0] == '\0'))
		return (1);
	new_av = create_args(ac, av);
	if (!parsing(new_av))
	{
		free_arr(new_av);
		return (ft_printf("Error\n"), 1);
	}
	init_stack(new_av, &a);
	if (is_sorted(&a))
		return (1);
	index_stack(a);
	sorting(&a, &b);
	if (a != NULL)
		free_stack(&a);
	if (b != NULL)
		free_stack(&b);
}	
