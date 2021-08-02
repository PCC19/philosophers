/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fork.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:26:35 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/02 18:34:16 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init_philo(t_control *control)
{
	g_fork = (int*) malloc(sizeof(int) * control->num_philo);
	memset(g_fork, 0, control->num_philo);
}
