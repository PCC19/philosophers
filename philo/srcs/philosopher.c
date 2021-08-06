/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:55:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/06 12:48:12 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*philosopher(void *param)
{	
	t_philo		*philo;

	philo = (t_philo *)param;
//	while(philo->state != FULL && philo->state != DEAD)
	while (philo->state != FULL && philo->state != DEAD && philo->control->continue_simulation == 1)
	{
		// try_forks
		get_forks(philo);
		eating(philo);
		// release forks
		drop_forks(philo);
		sleeping(philo);
		thinking(philo);
		// se algum morreu para
	}
	return (NULL);
}
