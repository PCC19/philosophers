/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thinking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:11:14 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/05 16:47:56 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	thinking(t_philo *philo)
{
	if (philo->state != FULL && philo->state != DEAD)
	{
		philo->state = THINKING;
		print_status(philo->num, THINKING, philo->control);
	}
}
