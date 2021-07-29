/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:59:07 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/29 18:07:01 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_status(int philo_num, e_philo_state *state, t_control *control)
{
	t_timeval	timestamp_ms;
	t_timeval	now;

	gettimeofday(&now, NULL);
	timestamp_ms = (now - control->simulation_start_time) / 1000;
	printf("%ld ", timestamp_ms);
	printf("%d ", philo_num);
	printf("%s\n", g_state_msg[state]);
}
