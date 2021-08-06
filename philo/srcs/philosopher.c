/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:55:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/06 16:07:34 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*philosopher(void *param)
{	
	t_philo		*philo;

	philo = (t_philo *)param;
	while (philo->state != FULL && philo->state != DEAD && !check_death(philo))
	{
		get_forks(philo);
		// check
		if (check_death(philo))
			break;
		eating(philo); // check
		// check
		if (check_death(philo))
			break;
		drop_forks(philo);
		// check
		if (check_death(philo))
			break;
		sleeping(philo); // check
		thinking(philo);
	}
	return (NULL);
}
