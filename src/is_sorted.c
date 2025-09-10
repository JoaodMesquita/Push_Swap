/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpmesquita <jpmesquita@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:19:20 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/10 18:37:40 by jpmesquita       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_stack **a)
{
	t_stack *temp;

	temp = *a;
	while(temp->next)
	{
		if(temp->value > temp->next->value)
			return (0);
		temp = temp->next;
	}
	free_stack(a);
	return (1);
}