/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eating.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:02:41 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/05 12:43:04 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	eating(t_philo *philo)
{
		philo[philo->num - 1].state = EATING;
		pthread_mutex_lock(&philo->control->print_mutex);
		print_status(philo->num, EATING, philo->control);
		pthread_mutex_unlock(&philo->control->print_mutex);
		smart_sleep(philo->control->time_to_eat);
}
