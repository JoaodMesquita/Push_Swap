/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:54:16 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/09 12:44:05 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_smallest_node(t_stack **a)
{
	int min;
	int min_index;
	int index;
	t_stack *temp;

	index = 0;
	min = INT_MAX;
	temp = *a;
	while (temp)
	{
		if(temp->value < min)
		{
			min = temp->value;
			min_index = index;
		}
		index++;
		temp = temp->next;
	}
	while ((*a)->value != min)
	{
		if (min_index == 1)
			rotate_a(a);
		else 
			rev_rotate_a(a);
	}
}
int	biggest_node(t_stack **a)
{	
	int max;
	t_stack *temp;

	max = 0;
	temp = *a;
	while (temp)
	{
		if(temp->value > max)
			max = temp->value;
		temp = temp->next;
	}
	return (max);
}
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
}

