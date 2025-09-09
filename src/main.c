/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 10:26:36 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/09 09:48:50 by joapedro         ###   ########.fr       */
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
		ft_printf ("Error\nNo input given");
	new_av = create_args(ac, av);
	if (!parsing(new_av))
		return (1);
	init_stack(new_av, &a);
	if (is_sorted(&a))
		return (1);
	index_stack(a);
	sorting(&a, &b);
	while(a)
	{
		ft_printf("%d\n", a->value);
		a = a->next;
	}
	
}	
