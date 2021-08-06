/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eating.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:02:41 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/06 20:03:13 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	eating(t_philo *philo)
{
	if (philo->state != DEAD)
	{
		philo->last_meal_start_time = now();
		philo->state = EATING;
		print_status(philo->num, EATING, philo->control);
		philo->meals_eaten++;
		while (elapsed_time(philo->last_meal_start_time) < philo->control->time_to_eat)
		{
			if (check_death(philo))
			{
//				printf("f\n");
				drop_forks(philo);
				return (0);
			}
			smart_sleep(1);
		}
	}
	return (1);
}
