/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:55:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/02 19:26:52 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	philosopher(t_control *control, t_philo **philo, int **forks, int num)
{	
	int			alive;
	(void) forks;
	int i;

	i = num - 1;
	alive = 1;
	while(alive)
	{
		(*philo)[i].state = EATING;
		print_status(num, EATING, control);
		msleep(control->time_to_eat);

		(*philo)[i].state = SLEEPING;
		print_status(num, SLEEPING, control);
		msleep(control->time_to_sleep);

		// start countdown (time_to_eat)
		// try to get forkss
			// se conseguir:
				// come
				// decrementa 
			// se nao conseguir: die
		(*philo)[i].state = THINKING;
		print_status(num, THINKING, control);
		msleep(1000);	// simula o tempo de conseguir garfos
			if (--control->number_eatings == 0)
			{
				// checar se todos terminaram de comer !
				printf("simulation end !\n");
				finish(*philo, *forks);
			}
			else if (elapsed_time((*philo)[i].last_meal_start_time) > control->time_to_die)
			{
				alive = 0;
				print_status(num, DEAD, control);
				// sai da thread
			}
			else
				(*philo)[i].last_meal_start_time = now();
	}
	return (0);
}
