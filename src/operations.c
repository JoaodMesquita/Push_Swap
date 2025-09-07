/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpmesquita <jpmesquita@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:54:04 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/07 10:37:53 by jpmesquita       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_to_b(t_stack **a, t_stack **b)
{
	t_stack *temp;

	if(*a == NULL)
		return ;
	temp = *a; //guarda primero nó em temp
	*a = temp->next; // segundo nó passa para primeiro lugar
	temp->next = *b;  // proximo nó passa a apontar pra a head da stack b
	*b = temp; // primeiro nó da stack b passa a ter valor do antigo primero nó da stack a
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
	temp = *a; //guarda o primeiro nó em temp
	*a = (*a)->next; //o segundo nó passa para primeiro lugar
	last = *a;
	while(last->next != NULL)
		last = last->next; //iterar para encontrar o ultimo nó
	last->next = temp; //coloca antigo primeiro nó no final
	temp->next = NULL; //antigo nó passa a ser o ultimo
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