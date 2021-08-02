/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:55:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/02 20:27:07 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	philosopher(t_control *control, t_philo **philo, int **forks, int num)
{	
	int			alive;

	alive = 1;
	while(alive)
	{
		// try_forks
		eating(control, philo, num);
		sleeping(control, philo, num);
		alive = thinking(control, philo, num, forks);
	}
	return (0);
}
