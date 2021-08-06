/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_inputs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:42:40 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/06 20:26:43 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	validate_inputs(int argc, char *argv[])
{
	int		i;

	if (argc < 5 || argc > 6)
		exit (1);
	i = 1;
	while (i < argc)
	{
		if (!is_integer(argv[i]) || ft_atoi(argv[i]) <= 0)
			exit (1);
		i++;
	}
}
