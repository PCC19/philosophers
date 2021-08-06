/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleeping.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:06:35 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/06 20:26:28 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	sleeping(t_philo *philo)
{
	long long int	time;

	time = now();
	if (philo->state != DEAD)
	{
		philo->state = SLEEPING;
		print_status(philo->num, SLEEPING, philo->control);
		while (elapsed_time(time) < philo->control->time_to_sleep)
		{
			if (check_death(philo))
			{
//				printf("g\n");
				return (0);
			}
			smart_sleep(1);
		}
	}
	return (1);
}
