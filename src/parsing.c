/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 10:43:59 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/08 10:18:29 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_number(char **av)
{
	int		i;
	long	number;

	i = 0;
	while (av[i])
	{
		number = ft_atol(av[i]);
		if (number > INT_MAX)
			return (ft_printf("Error\nNumber is too high\n"), 0);
		else if (number < INT_MIN)
			return (ft_printf("Error\nNumber is too low\n"), 0);
		i++;
	}
	return (1);
}

int	is_duplicate(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (ft_printf("Error\nCan't have duplicate numbers\n"), 0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_digit(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-' || av[i][j] == '+')
				j++;
			if (!(av[i][j] >= '0' && av[i][j] <= '9'))
				return (ft_printf("Error\nMust be a digit\n"), 0);
			else
				j++;
		}
		i++;
	}
	return (1);
}

int	parsing(char **av)
{
	return (max_number(av) && is_digit(av) && is_duplicate(av));
}

char	**create_args(int ac, char **av)
{
	char	**new_av;

	if (ac == 2)
	{
		new_av = ft_split(av[1], ' ');
	}
	else
		new_av = av + 1;
	return (new_av);
}
