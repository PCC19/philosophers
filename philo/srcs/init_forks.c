/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_forks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:26:35 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/06 20:22:30 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init_forks(t_control *control)
{
	int	i;

	control->forks = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));
	i = 0;
	while (i < control->num_philo)
	{
		pthread_mutex_init(&control->forks[i], NULL);
		i++;
	}
}
