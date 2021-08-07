/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:49:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/07 13:56:16 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char *argv[])
{
	t_philo		*philo;
	t_control	control;
	int			i;

	validate_inputs(argc, argv);
	init_control(argc, argv, &control);
	init_forks(&control);
	control.simulation_start_time = now();
	philo = init_philo(&control);
	i = -1;
	while (++i < control.num_philo)
		pthread_create(&philo[i].thread_philo, NULL, philosopher, &philo[i]);
	i = -1;
	while (++i < control.num_philo)
		pthread_join(philo[i].thread_philo, NULL);
	i = 0;
	while (i < control.num_philo)
	{
		if (philo[i].state == DEAD)
			print_status(philo[i].num, DEAD, &control);
		i++;
	}
	finish(philo);
}
