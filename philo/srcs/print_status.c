/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:59:07 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/06 01:56:05 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_status(int philo_num, t_philo_state state, t_control *control)
{
	long long int	timestamp_ms;

	pthread_mutex_lock(&control->print_mutex);
	timestamp_ms = elapsed_time(control->simulation_start_time);
	printf("%s", g_color[state]);
	printf("%lld ", timestamp_ms);
	printf("%d", philo_num);
	printf("%s\n", g_state_msg[state]);
	printf(RESET);
	pthread_mutex_unlock(&control->print_mutex);
}
