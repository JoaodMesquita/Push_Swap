/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpmesquita <jpmesquita@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:46:27 by jpmesquita        #+#    #+#             */
/*   Updated: 2025/09/07 21:24:59 by jpmesquita       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack *stack_a)
{
	int i;

	i = 0;
	while (stack_a)
	{
		stack_a = stack_a->next;
		i++;
	}
	return (i);
}

int	*stack_to_array(t_stack *stack_a, int size)
{
	int i;
	int *arr = malloc(size * sizeof(int));
	if(!arr)
		return(NULL);
	i = 0;
	while(stack_a)
	{
		arr[i] = stack_a->value;
		i++;
		stack_a = stack_a->next;
	}
	return (arr);
}

void	simple_sort(int *arr, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while(i < size - 1)
	{
		j = i;
		while(j < size)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void index_stack(t_stack *stack_a)
{
    int size = stack_size(stack_a);
    int *arr = stack_to_array(stack_a, size);
    int i;
	
	if(!arr)
	return ;
	simple_sort(arr, size);
	
	while (stack_a)
	{
		i = 0;
		while (i < size)
		{
			if (stack_a->value == arr[i])
			{
				stack_a->index = i;
				break;
			}
			i++;
		}
		stack_a = stack_a->next;
	}
	free(arr);
}
