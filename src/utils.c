/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoymaz <fsoymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:48:04 by fatihsoymaz       #+#    #+#             */
/*   Updated: 2023/05/05 15:07:57 by fsoymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_split(char **split)
{
	int	i;

	if (split)
	{
		i = 0;
		while (split[i])
		{
			free(split[i]);
			i++;
		}
		free(split);
	}
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

static void	ft_check(char *str)
{
	size_t	i;

	i = 0;
	if (!ft_isdigit(str[i]) && str[i] != '+' && str[i] != '-')
		ft_error();
	if ((str[i] == '+' || str[i] == '-') && !ft_isdigit(str[i + 1]))
		ft_error();
	i = 1;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			ft_error();
		}
		i++;
	}
}

int	ft_atoi2(char *str)
{
	long	i;
	long	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	ft_check(str);
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i++] - '0');
		if (result > 2147483648)
			ft_error();
	}
	if ((result * sign) == 2147483648)
		ft_error();
	return ((int)result * sign);
}

void	ft_check_duplicates(t_list *stack)
{
	int		value;
	t_list	*current;
	t_list	*runner;

	current = stack;
	while (current)
	{
		value = current->value;
		runner = current->next;
		while (runner)
		{
			if (runner->value == value)
				ft_error();
			runner = runner->next;
		}
		current = current->next;
	}
}
