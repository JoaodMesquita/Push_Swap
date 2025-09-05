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

void rev_rotate_a(t_stack **a)
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

void rev_rotate_b(t_stack **b)
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