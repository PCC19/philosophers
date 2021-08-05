/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:55:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/05 14:57:18 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*philosopher(void *param)
{	
	t_philo		*philo;

	philo = (t_philo *)param;
	while(philo->state != FULL && philo->state != DEAD)
	{
		// try_forks
		eating(philo);
		// release forks
		sleeping(philo);
		thinking(philo);
		// se algum morreu para
		
		pthread_mutex_lock(&philo->control->dead_mutex);
		long long int aux = elapsed_time(philo->last_meal_start_time);
		if (aux > philo->control->time_to_die)
		{
			philo->state = DEAD;
			print_status(philo->num, DEAD, philo->control);
			exit(1);
		}
		pthread_mutex_unlock(&philo->control->dead_mutex);
	}
	return (NULL);
}
