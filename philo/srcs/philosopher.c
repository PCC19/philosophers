/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:55:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/30 18:23:39 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	philosopher(t_control *control, t_philo **philo, int *g_fork, int num)
{	
	int			alive;
	(void) g_fork;

	alive = 1;
	while(alive)
	{
		(*philo)[num].last_meal_start_time = now();

		(*philo)[num].state = EATING;
		print_status(num, EATING, control);
		msleep(control->time_to_eat);

		(*philo)[num].state = SLEEPING;
		print_status(num, SLEEPING, control);
		msleep(control->time_to_sleep);

		(*philo)[num].state = THINKING;
		print_status(num, THINKING, control);
		msleep(control->time_to_die);
			if (--control->number_eatings == 0)
			{
				alive = 0;
				print_status(num, DEAD, control);
				printf("elapsed time: %ld\n", elapsed_time((*philo)[num].last_meal_start_time));
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
