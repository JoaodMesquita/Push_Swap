/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:54:04 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/08 14:28:06 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_to_b(t_stack **a, t_stack **b)
{
	t_stack *temp;

	if(*a == NULL)
		return ;
	temp = *a; //guarda primero node em temp
	*a = temp->next; // segundo node passa para primeiro lugar
	temp->next = *b;  // proximo node passa a apontar pra a head da stack b
	*b = temp; // primeiro node da stack b passa a ter valor do antigo primero node da stack a
	ft_printf("pb\n");
}
void push_to_a(t_stack **a, t_stack **b)
{
	t_stack *temp;

	if (*b == NULL)
		return ;
	temp = *b;
	*b = temp->next;
	temp->next = *a;
	*a = temp;
	ft_printf("pa\n");
}

void rotate_a(t_stack **a)
{
	t_stack *temp;
	t_stack *last;

	if(*a == NULL)
		return ;
	temp = *a; //guarda o primeiro node em temp
	*a = (*a)->next; //o segundo node passa para primeiro lugar
	last = *a;
	while(last->next != NULL)
		last = last->next; //iterar para encontrar o ultimo node
	last->next = temp; //coloca antigo primeiro node no final
	temp->next = NULL; //antigo node passa a ser o ultimo
	ft_printf("ra\n");
}

void rotate_b(t_stack **b)
{
	t_stack *temp;
	t_stack *last;

	if(*b == NULL)
		return ;
	temp = *b; 
	*b = (*b)->next; 
	last = *b;
	while(last->next != NULL)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
	ft_printf("rb\n");
}