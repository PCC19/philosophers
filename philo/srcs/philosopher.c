/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:55:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/06 16:47:56 by pcunha           ###   ########.fr       */
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
		{	printf("A\n");
			break;
		}
		if(eating(philo) == 0) // check
		{	printf("b\n");
			break;
		}
		// check
//		if (check_death(philo))
//		{	printf("c\n");
//			break;
//		}
		drop_forks(philo);
		// check
//		if (check_death(philo))
//		{	printf("d\n");
//			break;
//		}
		if (sleeping(philo) ==0) // check
		{	printf("e\n");
			break; 
		}
		thinking(philo);
	}
	return (NULL);
}
