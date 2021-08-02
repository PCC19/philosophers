/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thinking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:11:14 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/02 20:19:53 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	thinking(t_control *control, t_philo **philo, int num, int **forks)
{
	// start countdown (time_to_eat)
	// try to get forkss
		// se conseguir:
			// come
			// decrementa 
		// se nao conseguir: die
	(*philo)[num - 1].state = THINKING;
	print_status(num, THINKING, control);
	msleep(1000);	// simula o tempo de conseguir garfos
		if (--control->number_eatings == 0)
		{
			// checar se todos terminaram de comer !
			printf("simulation end !\n");
			finish(*philo, *forks);
			return (0);
		}
		else if (elapsed_time((*philo)[num - 1].last_meal_start_time) > control->time_to_die)
		{
			print_status(num, DEAD, control);
			return (0);
			// sai da thread
		}
		else
			(*philo)[num - 1].last_meal_start_time = now();
	return (1);
}
