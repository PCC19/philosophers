/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fork.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:26:35 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/02 18:54:15 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	*init_forks(t_control *control)
{
	int *forks;

	forks = (int*) malloc(sizeof(int) * control->num_philo);
	memset(forks, 0, control->num_philo * sizeof(int));
	return (forks);
}
