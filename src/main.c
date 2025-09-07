/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpmesquita <jpmesquita@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 10:26:36 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/07 21:26:40 by jpmesquita       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char **av)
{
	t_stack	*a;
	//t_stack	*b;
	char	**new_av;

	a = NULL;
	//b = NULL;
	if (ac < 2 || (ac == 2 && av[1][0] == '\0'))
		ft_printf ("Error\nNo input given");
	new_av = create_args(ac, av);
	if (!parsing(new_av))
	{
		return (0);
	}
	init_stack(new_av, &a);
	index_stack(a);
}