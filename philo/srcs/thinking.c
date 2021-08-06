/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thinking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:11:14 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/06 12:30:05 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	thinking(t_philo *philo)
{
//	if (philo->state != FULL && philo->state != DEAD)
	if (philo->state != FULL && philo->state != DEAD && philo->control->continue_simulation == 1)
	{
		philo->state = THINKING;
		print_status(philo->num, THINKING, philo->control);
	}
}
