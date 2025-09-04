/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpmesquita <jpmesquita@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:54:04 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/04 21:23:10 by jpmesquita       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_to_b(t_stack **a, t_stack **b)
{
	t_stack *temp;

	if(*a == NULL)
		return ;
	temp = *a;
	*a = temp->next;
	temp->next = *b;
	*b = temp;
}
void push_to_a(t_stack **b, t_stack **a)
{
	t_stack *temp;

	if (*b == NULL)
		return ;
	temp = *b;
	*b = temp->next;
	temp->next = *a;
	*a = temp;
}

void rotate_a(t_stack **a)
{
	//t_stack *temp;
	t_stack *last;
	int i;

	if(*a == NULL)
		return ;
	last = *a;
	i = 0;
	while(last->next != NULL)
	{
		last = last->next;
		i++;
	}
	ft_printf("%d", last->value);
}
