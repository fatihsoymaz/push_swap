/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatihsoymaz <fatihsoymaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 21:09:26 by fatihsoymaz       #+#    #+#             */
/*   Updated: 2023/04/28 21:11:53 by fatihsoymaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*get_next_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;
	int		has_min;

	min = 0;
	has_min = 1;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (has_min || head->value < min->value))
			{
				min = head;
				has_min = 0;
			}
			head = head->next;
		}
	}
	return (min);
}

void	index_stack(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}
