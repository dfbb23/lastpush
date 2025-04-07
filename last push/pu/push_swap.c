/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:36:55 by abmoudni          #+#    #+#             */
/*   Updated: 2025/04/07 03:24:58 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc < 2)
		ft_error();
	if (argc == 1)
		return (0);
	a = ft_process(argc, argv);
	if (!a || ft_checkdup(a))
	{
		ft_free_stack(&a);
		ft_error();
	}
	if (!ft_checksorted(a))
		ft_sort(&a);
	ft_free_stack(&a);
	return (0);
}
