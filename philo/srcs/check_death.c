/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_death.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <pcunha@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:48:36 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/07 13:38:30 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_death(t_philo *philo)
{
	int	i;

	pthread_mutex_lock(&philo->control->dead_mutex);
	philo->control->count_meals = 0;
	i = -1;
	while (++i < philo->control->num_philo)
	{
		if (elapsed_time(philo->ptr_all_philos[i].last_meal_start_time)
			> philo->control->time_to_die)
		{
			philo->ptr_all_philos[i].state = DEAD;
			pthread_mutex_unlock(&philo->control->dead_mutex);
			return (1);
		}
		if (philo->ptr_all_philos[i].meals_eaten
			>= philo->control->number_of_meals)
			philo->control->count_meals++;
	}
	if (philo->control->count_meals == philo->control->num_philo)
	{
		pthread_mutex_unlock(&philo->control->dead_mutex);
		return (1);
	}
	pthread_mutex_unlock(&philo->control->dead_mutex);
	return (0);
}
