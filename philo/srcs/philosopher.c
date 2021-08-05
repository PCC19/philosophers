/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:55:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/05 14:16:55 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*philosopher(void *param)
{	
	t_philo		*philo;

	philo = (t_philo *)param;
	while(philo->state != FULL)
	{
		// try_forks
		eating(philo);
		// release forks
		sleeping(philo);
		thinking(philo);
		// se todos comeram num_meals para

		// se algum morreu para
	}
	return (NULL);
}
