/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:55:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/05 17:14:58 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*philosopher(void *param)
{	
	t_philo		*philo;
	int			flag;

	philo = (t_philo *)param;
	flag = 1;
	while (flag)
	//while(philo->state != FULL && philo->state != DEAD)
	{
		// try_forks
		get_forks(philo);
		eating(philo);
		// release forks
		drop_forks(philo);
		sleeping(philo);
		thinking(philo);
		// se algum morreu para
		pthread_mutex_lock(&philo->control->dead_mutex);
		if (elapsed_time(philo->last_meal_start_time)
			> philo->control->time_to_die)
		{
			philo->state = DEAD;
			print_status(philo->num, DEAD, philo->control);
			exit(1);
		}
		pthread_mutex_unlock(&philo->control->dead_mutex);
			pthread_mutex_lock(&philo->control->flag_mutex);
			if (philo->state != FULL && philo->state != DEAD)
				flag = 0;
			else
				flag = 1;
			pthread_mutex_unlock(&philo->control->flag_mutex);
	}
	return (NULL);
}
