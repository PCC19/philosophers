/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:55:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/07 13:50:17 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*philosopher(void *param)
{	
	t_philo		*philo;

	philo = (t_philo *)param;
	if ((philo->num % 2) == 0)
		smart_sleep(1);
	while (philo->state != DEAD && !check_stop(philo))
	{
		get_forks(philo);
		if (check_stop(philo))
			break ;
		if (eating(philo) == 0)
			break ;
		if (check_stop(philo))
		{	
			drop_forks(philo);
			break ;
		}
		drop_forks(philo);
		if (check_stop(philo))
			break ;
		if (sleeping(philo) == 0)
			break ;
		thinking(philo);
	}
	return (NULL);
}
