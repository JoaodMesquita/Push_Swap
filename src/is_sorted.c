/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:19:20 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/08 14:42:00 by joapedro         ###   ########.fr       */
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
	return (1);
}