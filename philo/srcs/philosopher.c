/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:55:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/29 22:52:44 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	philosopher(t_control *control, t_philo **philo, int *g_fork, int num)
{	
	t_timeval	time;
	int			alive;
	(void) g_fork;

	alive = 1;
	while(alive)
	{
		gettimeofday(&time, NULL);
		philo[num]->last_meal_start_time = time.tv_sec;
		usleep(control->time_to_eat);
		print_status(num, EATING, control);
		philo[num]->state = SLEEPING;
		usleep(control->time_to_sleep);
		print_status(num, SLEEPING, control);
		philo[num]->state = THINKING;
		print_status(num, THINKING, control);
			if (--control->number_eatings == 0)
			{
				alive = 0;
				printf("elapsed time: %ld\n", elapsed_time(philo[num]->last_meal_start_time));
				print_status(num, DEAD, control);
			}

		// start countdown (time_to_eat)
		// try to get forks
			// se conseguir: come
				// come
				// decrementa 
			// se nao conseguir: die
	}
	return (0);
}
