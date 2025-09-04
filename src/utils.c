/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:54:16 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/03 16:52:19 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long ft_atol(char *str)
{
	int i;
	long res;
	int sign;

	i = 0;
	sign = 1;
	res = 0;

	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
void init_stack(char **av, t_stack **a)
{
	t_stack *newnode;
	t_stack *tail;
	int i;

	i = 0;
	while(av[i])
	{
		newnode = malloc(sizeof(t_stack));
		if(!newnode)
			return ;
		newnode->value = ft_atol(av[i]);
		newnode->next = NULL;
		tail = *a;
		if (*a == NULL)
		{
			*a = newnode;
			ft_printf("%d\n", newnode->value);
			i++;
			continue ;
		}
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = newnode;
		ft_printf("%d\n", newnode->value);
		i++;
	}
}
	
	