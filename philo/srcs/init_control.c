/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:54:35 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/05 17:15:15 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	init_control(int argc, char *argv[], t_control *control)
{
	int i;

	i = 1;
	control->num_philo = ft_atoi(argv[i++]);
	control->time_to_die = ft_atoi(argv[i++]);
	control->time_to_eat = ft_atoi(argv[i++]);
	control->time_to_sleep = ft_atoi(argv[i++]);
	if (argc == 6 && is_integer(argv[i]))
		control->number_of_meals = ft_atoi(argv[i++]);
	else
		control->number_of_meals = -1;
	pthread_mutex_init(&control->print_mutex, NULL);
	pthread_mutex_init(&control->dead_mutex, NULL);
	pthread_mutex_init(&control->flag_mutex, NULL);
	return (0);
}
