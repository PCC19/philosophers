/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:59:07 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/30 18:02:22 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_status(int philo_num, t_philo_state state, t_control *control)
{
	long int	timestamp_ms;
	long int	agora;

	(void) agora;
//	agora = now();
//	printf("agora: %ld\n ", agora);
//	printf("timest:%ld\n ", control->simulation_start_time);
//	timestamp_ms = (now() - control->simulation_start_time);
	timestamp_ms = elapsed_time(control->simulation_start_time);
	printf("%ld ", timestamp_ms);
	printf("%d", philo_num);
	printf("%s\n", g_state_msg[state]);
}
