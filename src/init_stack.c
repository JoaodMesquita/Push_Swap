/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpmesquita <jpmesquita@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 09:30:55 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/10 18:31:37 by jpmesquita       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			return (free(*a));
		newnode->value = ft_atoi(av[i]);
		newnode->next = NULL;
		tail = *a;
		if (*a == NULL)
		{
			*a = newnode;
			i++;
			continue ;
		}
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = newnode;
		i++;
	}
	free_arr(av);
}

void	free_stack(t_stack **stack)
{
	t_stack	*temp;

	while(*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}