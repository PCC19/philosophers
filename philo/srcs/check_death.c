/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_death.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <pcunha@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:48:36 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/06 12:13:29 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	check_death(t_philo *philo)
{
	int i;

	pthread_mutex_lock(&philo->control->dead_mutex);
	i = 0;
	while (i < philo->control->num_philo)
	{
		if (elapsed_time(philo->ptr_all_philos[i].last_meal_start_time)
			> philo->control->time_to_die)
		{
			philo->ptr_all_philos[i].state = DEAD;
			philo->control->continue_simulation = 0;
		}
		i++;
	}
	pthread_mutex_unlock(&philo->control->dead_mutex);
}
