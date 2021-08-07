/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <pcunha@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:03:48 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/07 13:12:26 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_stop(t_philo *philo)
{
	if (philo->control->num_philo == 1)
	{
		pthread_mutex_lock(&philo->control->forks[philo->idx_fork_right]);
		print_status(philo->num, TAKEN_FORK, philo->control);
		smart_sleep(philo->control->time_to_die);
		pthread_mutex_unlock(&philo->control->forks[philo->idx_fork_right]);
		print_status(philo->num, DEAD, philo->control);
		return (1);
	}
	return (check_death(philo));
}
