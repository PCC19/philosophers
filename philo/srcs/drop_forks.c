/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drop_forks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <pcunha@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:53:13 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/07 13:23:51 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	drop_forks(t_philo *philo)
{
//	if (philo->num % 2 == 0)
//	{
//		pthread_mutex_unlock(&philo->control->forks[philo->idx_fork_right]);
//		pthread_mutex_unlock(&philo->control->forks[philo->idx_fork_left]);
//	}
//	else
//	{
//		pthread_mutex_unlock(&philo->control->forks[philo->idx_fork_left]);
//		pthread_mutex_unlock(&philo->control->forks[philo->idx_fork_right]);
//	}
		pthread_mutex_unlock(&philo->control->forks[philo->idx_fork_right]);
		pthread_mutex_unlock(&philo->control->forks[philo->idx_fork_left]);
}
