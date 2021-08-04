/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:54:35 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/04 16:55:03 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	init_control(int argc, char *argv[], t_control *control)
{
	int i;

	i = 1;
	control->num_philo = ft_atoi(argv[i++]);
	control->time_to_die = ft_atoi(argv[i++]);
	control->time_to_eat = ft_atoi(argv[i++]);
	control->time_to_sleep = ft_atoi(argv[i++]);
	if (argc == 6 && is_integer(argv[i]))
		control->number_eatings = ft_atoi(argv[i++]);
	else
		control->number_eatings = -1;
	printf("fim init_control\n");
	return (0);
}
