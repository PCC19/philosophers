/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:59:07 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/29 18:29:27 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_status(int philo_num, t_philo_state state, t_control *control)
{
	long int	timestamp_ms;
	t_timeval	now;

	usleep(1000000);
	gettimeofday(&now, NULL);
	timestamp_ms = (now.tv_sec - control->simulation_start_time.tv_sec) * 1000;
	printf("%ld ", timestamp_ms);
	printf("%d", philo_num);
	printf("%s\n", g_state_msg[state]);
}
