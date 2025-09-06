/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpmesquita <jpmesquita@student.42.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:43:25 by jpmesquita        #+#    #+#             */
/*   Updated: 2025/09/05 12:43:25 by jpmesquita       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(t_stack **a)
{
	t_stack *temp;
	t_stack *second_node;

	if(*a == NULL || (*a)->next == NULL)
		return ;
	temp = *a; // guarda ponteiro N1(head) numa variavel temp;
	second_node = (*a)->next; // guarda ponteiro segundo nó (N2) numa variavel auxiliar; 
	temp->next = second_node->next; // ponteiro next de N1 que apontava para N2 passa a apontar para N3; 
	second_node->next = temp; // ponteiro next de N1 que apontava para N3 passa a apontar para N1;
	*a = second_node; // ponteiro de N1 passa a apontar para N2;

	ft_printf("%d\n", (*a)->value);
	ft_printf("%d\n", (*a)->next->value);
	ft_printf("%d\n", (*a)->next->next->value);
	ft_printf("%d\n", (*a)->next->next->next->value);
}

void swap_b(t_stack **b)
{
	t_stack *temp;
	t_stack *second_node;

	if(*b == NULL || (*b)->next == NULL)
		return ;
	temp = *b; // guarda ponteiro N1(head) numa variavel temp;
	second_node = (*b)->next; // guarda ponteiro segundo nó (N2) numa variavel auxiliar; 
	temp->next = second_node->next; // ponteiro next de N1 que apontava para N2 passa a apontar para N3; 
	second_node->next = temp; // ponteiro next de N1 que apontava para N3 passa a apontar para N1;
	*b = second_node; // ponteiro de N1 passa a apontar para N2;

	ft_printf("%d\n", (*b)->value);
	ft_printf("%d\n", (*b)->next->value);
	ft_printf("%d\n", (*b)->next->next->value);
	ft_printf("%d\n", (*b)->next->next->next->value);
}
void	rev_rotate_a(t_stack **a)
{
	t_stack *last;
	t_stack *prev;

	if(*a == NULL)
		return ; 
	last = *a;
	prev = NULL;
	while(last->next != NULL)
	{
		prev = last; // obter penultimo nó
		last = last->next; // ultimo nó
	}
	prev->next = NULL; // atribuir ao ultimo nó o valor NULL 
	last->next = *a; // primeiro nó passa a ser o segundo
	*a = last; // primeiro nó passa a ser o último
    ft_printf("%d\n", (*a)->value);
    ft_printf("%d\n", (*a)->next->value);
    ft_printf("%d\n", (*a)->next->next->value);
    ft_printf("%d\n", (*a)->next->next->next->value);
    ft_printf("%d\n", (*a)->next->next->next->next);
}

void	rev_rotate_b(t_stack **b)
{
	t_stack *last;
	t_stack *prev;

	if(*b == NULL)
		return ; 
	last = *b;
	prev = NULL;
	while(last->next != NULL)
	{
		prev = last;
		last = last->next; 
	}
	prev->next = NULL;
	last->next = *b;
	*b = last;
    ft_printf("%d\n", (*b)->value);
    ft_printf("%d\n", (*b)->next->value);
    ft_printf("%d\n", (*b)->next->next->value);
    ft_printf("%d\n", (*b)->next->next->next->value);
    ft_printf("%d\n", (*b)->next->next->next->next);
}