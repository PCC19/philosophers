/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleeping.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:06:35 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/02 20:07:25 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	sleeping(t_control *control, t_philo **philo, int num)
{
		(*philo)[num - 1].state = SLEEPING;
		print_status(num, SLEEPING, control);
		msleep(control->time_to_sleep);
}
