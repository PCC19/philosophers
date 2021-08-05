/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleeping.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:06:35 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/05 14:32:32 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	sleeping(t_philo *philo)
{
	if (philo->state != FULL)
	{
		philo->state = SLEEPING;
//		pthread_mutex_lock(&philo->control->print_mutex);
		print_status(philo->num, SLEEPING, philo->control);
//		pthread_mutex_unlock(&philo->control->print_mutex);
		smart_sleep(philo->control->time_to_sleep);
	}
}
