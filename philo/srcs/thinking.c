/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thinking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:11:14 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/04 17:49:23 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	thinking(t_philo *philo)
{
	// start countdown (time_to_eat)
	// try to get forkss
		// se conseguir:
			// come
			// decrementa 
		// se nao conseguir: die
	philo[philo->num - 1].state = THINKING;
	print_status(philo->num, THINKING, philo->control);
	msleep(1000);	// simula o tempo de conseguir garfos
		if (--philo->control->number_eatings == 0)
		{
			// checar se todos terminaram de comer !
			printf("simulation end !\n");
			//finish(philo);
			return (0);
		}
		else if (elapsed_time(philo->last_meal_start_time) > philo->control->time_to_die)
		{
			print_status(philo->num, DEAD, philo->control);
			return (0);
			// sai da thread
		}
		else
			philo->last_meal_start_time = now();
	return (1);
}
