/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:37:11 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/03 14:42:00 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void init_stack(t_stack **stack)
{
	t_stack *a;
	t_stack *b;
	t_stack *c;

	a = malloc(sizeof(t_stack));
	b = malloc(sizeof(t_stack));
	c = malloc(sizeof(t_stack));
	
	a->value = 2;
	b->value = 3;
	c->value = 4;

	a->next = b;
	b->next = c;
	c->next = NULL;

	stack = &a;

	while(*stack)
	{
		ft_printf("%d\n", (*stack)->value);
		(*stack) = (*stack)->next;
	}
}
int main(void)
{
	t_stack *a;

	a = NULL;
	init_stack(&a);
	return (1);
}