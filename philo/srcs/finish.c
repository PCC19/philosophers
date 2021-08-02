/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:02:54 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/02 20:36:00 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	finish(t_philo *philo, int *forks)
{
	if (philo != NULL)
	{
		free(philo);
		philo = NULL;
	}
	if (forks != NULL)
	{
		free(forks);
		forks = NULL;
	}
	exit(0);
}
