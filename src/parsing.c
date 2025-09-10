/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpmesquita <jpmesquita@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 10:43:59 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/10 18:51:57 by jpmesquita       ###   ########.fr       */
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
		if (number > INT_MAX || number < INT_MIN)
			return (0);
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
				return (0);
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
				return (0);
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
	int		i;

	if (ac == 2)
	{
		new_av = ft_split(av[1], ' ');
	}
	else
	{
		new_av = malloc(ac * sizeof(char *));
		if (!new_av)
			return (NULL);
		i = 1;
		while (i < ac)
		{
			new_av[i - 1] = ft_strdup(av[i]);
			i++;
		}
		new_av[i - 1] = NULL;
	}
	return (new_av);
}
