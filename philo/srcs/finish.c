/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:02:54 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/05 18:06:40 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	finish(t_philo *philo)
{
	int i;

	if (philo != NULL)
	{
		i = 0;
		while (i < philo->control->num_philo)
		{
			pthread_mutex_destroy(&philo->control->forks[i]);
			i++;
		}
		pthread_mutex_destroy(&philo->control->print_mutex);
		pthread_mutex_destroy(&philo->control->dead_mutex);
		free(philo->control->forks);
		free(philo);
		philo = NULL;
	}
	exit(0);
}
