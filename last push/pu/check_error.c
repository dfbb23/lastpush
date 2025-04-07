/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:29:46 by abmoudni          #+#    #+#             */
/*   Updated: 2025/04/07 03:29:58 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	space(int c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int	check(char *nb)
{
	int	i;

	i = 0;
	if (!nb[i])
		return (1);
	if ((nb[i] == '+' || nb[i] == '-') && ft_isdigit(nb[i + 1]))
		i++;
	while (nb[i])
	{
		if (ft_isdigit(nb[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_error(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (check(argv[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}
