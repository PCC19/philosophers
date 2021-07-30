/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:28:38 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/30 17:34:51 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_control(t_control control)
{
	(void)control;
	printf("------ control -------\n");
	printf("num:		%ld\n", control.num_philo);
	printf("time_to_die:	%ld\n", control.time_to_die);
	printf("time_to_eat:	%ld\n", control.time_to_eat);
	printf("time_to_sleep:	%ld\n", control.time_to_sleep);
	printf("number_eats:	%ld\n", control.number_eatings);
	printf("\nsimulatio start time:	%ld\n", control.simulation_start_time);
	printf("--------------- -------\n");
}
