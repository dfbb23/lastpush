/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:33:36 by abmoudni          #+#    #+#             */
/*   Updated: 2025/04/07 03:47:20 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(ft_lstlast(*stack))->next = stack_new;
}

t_stack	*ft_process(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;
	char	**tmp;

	i = 1;
	a = NULL;
	tmp = NULL;
	while (i < argc)
	{
		tmp = ft_split(argv[i], 32);
		if (check_error(tmp) || !tmp)
			ft_free_all(tmp, a);
		j = 0;
		while (tmp[j])
		{
			ft_add_back(&a, ft_stack_new(ft_atoi(tmp[j])));
			j++;
		}
		_free(tmp);
		i++;
	}
	return (a);
}
