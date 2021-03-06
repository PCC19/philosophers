/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_forks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <pcunha@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:48:21 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/07 13:48:42 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	get_forks(t_philo *philo)
{
	if (philo->state != DEAD)
	{
		pthread_mutex_lock(&philo->control->forks[philo->idx_fork_left]);
		print_status(philo->num, TAKEN_FORK, philo->control);
		pthread_mutex_lock(&philo->control->forks[philo->idx_fork_right]);
		print_status(philo->num, TAKEN_FORK, philo->control);
	}
}
