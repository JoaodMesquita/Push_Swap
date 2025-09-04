/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:54:04 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/04 15:19:33 by joapedro         ###   ########.fr       */
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
	int i = 0;

	if(*a == NULL)
		return ;
	last = *a;
	while(last != NULL)
	{
		last = last->next;
		i++;
	}
	
	ft_printf("%d", last->value);
}
