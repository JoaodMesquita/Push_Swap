/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:54:10 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/08 16:01:44 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_stack **a)
{
	int big_node;
	
	big_node = biggest_node(a);
	if((*a)->value == big_node)
		rotate_a(a);
	else if(big_node == (*a)->next->value)
		rev_rotate_a(a);
	if ((*a)->value > (*a)->next->value)
		swap_a(a);
}
void	four_sort(t_stack **a, t_stack **b)
{
	int	small_node;
	
	small_node = smallest_node(a);
	while((*a)->value != small_node)
		rev_rotate_a(a);
	push_to_b(a, b);
	three_sort(a);
	push_to_a(a, b);
}

void	sorting(t_stack **a, t_stack **b)
{
	int size;

	size = stack_size(*a);

	if (size == 2)
		rotate_a(a);
	if (size == 3)
		three_sort(a);
	if (size == 4)
		four_sort(a, b);
		/* 
		four_sort(a);
	if (size == 5)
		five_sort(a); 
	*/
}