/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_little_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatihsoymaz <fatihsoymaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 00:58:58 by fatihsoymaz       #+#    #+#             */
/*   Updated: 2023/05/04 15:17:52 by fatihsoymaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_list **stack_a)
{
	t_list	*curr;
	int		a;
	int		b;
	int		c;

	curr = *stack_a;
	a = curr->value;
	b = curr->next->value;
	c = curr->next->next->value;
	if (a > b && b < c && a < c)
		sa(*stack_a);
	if (a < b && b > c && a < c)
	{
		rra(stack_a);
		sa(*stack_a);
	}
	else if (a > b && b > c && a > c)
	{
		sa(*stack_a);
		rra(stack_a);
	}
	else if (a > b && b < c && a > c)
		ra(stack_a);
	else if (a < b && b > c && a > c)
		rra(stack_a);
}

void	ft_sort_four(t_list **stack_a, t_list **stack_b)
{
	int	min_value;

	min_value = ft_min(*stack_a);
	while ((*stack_a)->value != min_value)
		rra(stack_a);
	pb(stack_a, stack_b);
	ft_sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	int	min_value;

	min_value = ft_min(*stack_a);
	while ((*stack_a)->value != min_value)
		rra(stack_a);
	pb(stack_a, stack_b);
	ft_sort_four(stack_a, stack_b);
	pa(stack_a, stack_b);
}
