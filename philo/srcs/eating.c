/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eating.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:02:41 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/06 12:29:38 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	eating(t_philo *philo)
{
//	if (philo->state != FULL && philo->state != DEAD)
	if (philo->state != FULL && philo->state != DEAD && philo->control->continue_simulation == 1)
	{
		philo->last_meal_start_time = now();
		philo->state = EATING;
//		pthread_mutex_lock(&philo->control->print_mutex);
		print_status(philo->num, EATING, philo->control);
		philo->meals_eaten++;
		if (philo->meals_eaten == philo->control->number_of_meals)
			philo->state = FULL;
//		pthread_mutex_unlock(&philo->control->print_mutex);
		smart_sleep(philo->control->time_to_eat);
	}
}
