/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:02:54 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/04 17:14:59 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	finish(t_philo *philo)
{
	int i;

	if (philo != NULL)
	{
		i = 0;
		while (i < philo->control->num_philo)
		{
			pthread_mutex_destroy(&philo->control->forks[i]);
			i++;
		}
		free(philo);
		philo = NULL;
	}
	exit(0);
}
