/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:55:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/05 18:08:27 by pcunha           ###   ########.fr       */
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
		get_forks(philo);
		eating(philo);
		// release forks
		drop_forks(philo);
		sleeping(philo);
		thinking(philo);
		// se algum morreu para
		if (elapsed_time(philo->last_meal_start_time)
			> philo->control->time_to_die)
		{
			philo->state = DEAD;
			print_status(philo->num, DEAD, philo->control);
			exit(1);
		}
	}
	return (NULL);
}
