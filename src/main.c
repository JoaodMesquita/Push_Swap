/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 10:26:36 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/03 15:56:54 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char **av)
{
	t_stack *a;
	char **new_av;

	a = NULL;
	if (ac < 2 || (ac == 2 && av[1][0] == '\0'))
		ft_printf("Error\nNo input given");
	new_av = create_args(ac, av);
	if (!parsing(new_av))
	{
		ft_printf("PARSING INCORRETO");
		return(0);
	}
	init_stack(new_av, &a);
}