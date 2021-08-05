/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thinking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:11:14 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/05 14:15:32 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	thinking(t_philo *philo)
{
	if (philo->state != FULL)
	{
		// para so qdo todos comerem ou qdo um morre

		// start countdown (time_to_eat)
		// try to get forkss
			// se conseguir:
				// come
				// decrementa 
			// se nao conseguir: die
		philo->state = THINKING;
		//pthread_mutex_lock(&philo->control->print_mutex);
		print_status(philo->num, THINKING, philo->control);
		//pthread_mutex_unlock(&philo->control->print_mutex);
		smart_sleep(1000);	// simula o tempo de conseguir garfos

	//		if (--philo->control->number_of_meals== 0)
	//		{
	//			// checar se todos terminaram de comer !
	//			printf("simulation end !\n");
	//			finish(philo);
	//			return (0);
	//		}
	//		else if (elapsed_time(philo->last_meal_start_time) > philo->control->time_to_die)
	//		{
	//			//pthread_mutex_lock(&philo->control->print_mutex);
	//			print_status(philo->num, DEAD, philo->control);
	//			//pthread_mutex_unlock(&philo->control->print_mutex);
	//			finish(philo);
	//			return (0);
	//			// sai da thread
	//		}
	//		else
	//			philo->last_meal_start_time = now();
	}
}
