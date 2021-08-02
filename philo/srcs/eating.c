/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eating.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:02:41 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/02 20:04:38 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	eating(t_control *control, t_philo **philo, int num)
{
		(*philo)[num - 1].state = EATING;
		print_status(num, EATING, control);
		msleep(control->time_to_eat);
}
