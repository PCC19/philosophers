/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:55:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/07 13:12:53 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*philosopher(void *param)
{	
	t_philo		*philo;

	philo = (t_philo *)param;
	while (philo->state != DEAD && !check_stop(philo))
	{
		get_forks(philo);
		// check
		if (check_stop(philo))
		{	
//			printf("A\n");
			break;
		}
		if(eating(philo) == 0) // check
		{	
//			printf("b\n");
			break;
		}
		// check
		if (check_stop(philo))
		{	
//			printf("c\n");
			drop_forks(philo);
			break;
		}
		drop_forks(philo);
		// check
		if (check_stop(philo))
		{	
//			printf("d\n");
			break;
		}
		if (sleeping(philo) ==0) // check
		{	
//			printf("e\n");
			break; 
		}
		thinking(philo);
	}
	return (NULL);
}
