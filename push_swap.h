/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatihsoymaz <fatihsoymaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:36:06 by fatihsoymaz       #+#    #+#             */
/*   Updated: 2023/05/01 15:08:11 by fatihsoymaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

int					ft_lstsize(t_list *lst);
t_list				*ft_lstnew(int value);
void				ft_lstadd_back(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *head);

void				ft_check_duplicates(t_list *stack);
int					ft_atoi2(char *str);
void				ft_free_split(char **split);
char				**ft_split2(char const *s, char c);
void				index_stack(t_list **stack);
char				*ft_join_strings(char *s1, char *s2);
void				radix_sort(t_list **stack_a, t_list **stack_b);
void				ft_sort_three(t_list **stack_a);
void				ft_sort_four(t_list **stack_a, t_list **stack_b);
void				ft_sort_five(t_list **stack_a, t_list **stack_b);
void				small_five(t_list **stack_a, t_list **stack_b);
void				pa(t_list **stack_a, t_list **stack_b);
void				pb(t_list **stack_a, t_list **stack_b);
void				ra(t_list **stack_a);
void				sa(t_list *stack_a);
void				rra(t_list **stack_a);
int					ft_checksorted(t_list *stack_a);
int					ft_min(t_list *a);
#endif