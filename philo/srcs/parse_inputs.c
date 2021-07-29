/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:42:40 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/29 20:50:16 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void validate_inputs(int argc, char *argv[])
{
	int		i;

	if (argc < 5 || argc > 6)
		exit (1);
	i = 1;
	while (i < argc)
	{
		if (!is_integer(argv[i]) || ft_atoi(argv[i]) < 0)
			exit (1);
		i++;
	}
}

int	parse_inputs(int argc, char *argv[], t_control *control)
{
	int i;

	validate_inputs(argc, argv);
	i = 1;
	control->num_philo = ft_atoi(argv[i++]);
	control->time_to_die = ft_atoi(argv[i++]);
	control->time_to_eat = ft_atoi(argv[i++]);
	control->time_to_sleep = ft_atoi(argv[i++]);
	if (argc == 6 && is_integer(argv[i]))
		control->number_eatings = ft_atoi(argv[i++]);
	else
		control->number_eatings = -1;
	printf("fim parse inputs\n");
	return (0);
}
